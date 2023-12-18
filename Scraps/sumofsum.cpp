#include<stdio.h>
#include<iostream>
using namespace std;

int returnAsSingleBit(int val){
    int singleVal = 0;
    if(val/10 == 0) return val;
    while(val != 0){
        int digit = val % 10;
        singleVal += digit;
        val /= 10;
    }
    return singleVal;
}

int main(){
    int n;
    scanf("%d", &n);

    int* a = (int*) malloc (n * sizeof(int*));
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }

    for(int i=0;i<n;i++){
        int sum = 0;
        int salt = a[i];
        for(int j=0;j<n;j++){
            sum += returnAsSingleBit(salt + a[j]);
        }

        printf("%d ", sum);
    }
    return 0;
}