//
// Created by kiasnostie on 06/01/21.
//

#include <iostream>
#include <vector>
using namespace  std;

//Global declarations
int testcases;
struct bTree{
    int value;
    struct bTree *left;
    struct bTree *right;
};

struct bTree* newLeaf(int value, struct bTree* tree){
    tree = (struct bTree*)malloc(sizeof(struct bTree));
    tree->value = value;
    tree->left = tree->right = NULL;
    return tree;
}

struct bTree* insertLeaf(int value, struct bTree* tree){
    if(tree == NULL)return newLeaf(value, tree);
    if(value > tree->value)tree->right = newLeaf(value, tree->right);
    else if(value < tree->value)tree->left = newLeaf(value, tree->left);
    return tree;
}

struct bTree* nextValueOnDemand(struct bTree* tree){
    struct bTree* nextVal = tree;
    while(nextVal && nextVal->left!=NULL)nextVal = nextVal->left;
    return nextVal;
}

struct bTree* deleteNode(int value, struct bTree* tree){
    if(tree == NULL)return tree;
    if(value > tree->value)tree->right = deleteNode(value, tree->right);
    else if(value < tree->value)tree->left = deleteNode(value, tree->left);
    else if(value == tree->value){
        if(tree->left == NULL){
            struct bTree* leftover = tree->left;
            free(tree);
            return leftover;
        }else if(tree->right == NULL){
            struct bTree* leftover = tree->right;
            free(tree);
            return leftover;
        }else{
            struct bTree* nowTree = nextValueOnDemand(tree->right);
            tree->value = nowTree->value;
            tree->right = deleteNode(nowTree->value, tree->right);
        }
        return tree;
    }
    return tree;
}

int adjacentMurderer(struct bTree* tree){
    int finalSum = 0;

    while(tree->right != NULL){
        tree->right = deleteNode(tree->right->value, tree);
        finalSum+=tree->value;
    }

    while(tree->left != NULL){
        tree->left = deleteNode(tree->left->value, tree);
        finalSum+=tree->value;
    }

    return finalSum;
}

int main(){
    int count,value;
    struct bTree* minMaxTree = NULL;
    //to count the no of entry values and to save em

    cin>>testcases;
    while(testcases--){
        cin>>count;
        for(int i=0;i<count;i++){
            cin>>value;
            minMaxTree = insertLeaf(value, minMaxTree);
        }
        int finalSum = adjacentMurderer(minMaxTree);
        cout<<finalSum;
    }
}