//
// Created by kiasnostie on 17-12-2023 as a warm-up
// don't judge me future self
// https://codeforces.com/problemset/problem/4/A
//

#include <stdint.h>
#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    int w;
    scanf("%d",&w);
    if(w%2==0 && w!=0 && w!=2){
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}