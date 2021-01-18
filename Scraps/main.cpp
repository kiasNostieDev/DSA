#include <iostream>
int n,l,r,k;

struct bTree{
    int d;
    struct bTree *right, *left;
};

struct bTree* newTree(struct bTree* tree, int d){
    tree = (struct bTree*)malloc(sizeof(struct bTree));
    tree->d = d;
    tree->left = tree->right = NULL;
    return tree;
}

struct bTree* weightLine(struct bTree* tree, int d){
    if(tree == NULL)return newTree(tree, d);
    if(tree->d > d)tree->left = newTree(tree->left, d);
    else if(tree->d < d)tree->right = newTree(tree->right, d);
    return tree;
}

int* rotator(const int d[n], int pos){
    int* newArray;
    int loc = 0;

    for(int i=pos;i<n;i++)newArray[loc++] = d[i];
    for(int i=0;i<pos;i++)newArray[loc++] = d[i];

    return newArray;
}

double avgDifficultyFinder(struct bTree* weights){

    return 1.0;
}

int main() {
    std::cin>>n>>l>>r>>k;
    int di[n];
    struct bTree* pWeights = NULL;
    double A = 0;

    for(int i=0;i<n;i++){
        int dummy;
        std::cin>>dummy;
        di[i] = dummy;
    }

    for(int i=0;i<n;i++){
        int* weights = rotator(di, i);

        for(int j=0;j<n;j++){
            pWeights = weightLine(pWeights, weights[j]);
        }
        double a = avgDifficultyFinder((pWeights));
        if(a<A || A==0)A=a;
    }
    std::cout<<std::endl<<A;
}
