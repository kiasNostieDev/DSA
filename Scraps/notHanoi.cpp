//
// Created by kiasnostie on 14/01/21.
// Related to https://www.codechef.com/LRNDSA04/problems/STACKS
//

#include<bits/stdc++.h>
using namespace std;

int main(){
    int T,N;
    scanf("%d",&T);
    while(T--){
        scanf("%d",&N);
        int Ai[N];
        for(int i=0;i<N;i++){
            scanf("%d",&Ai[i]);
        }
        int i=0;
        vector<int> stackOfDisks;
        stackOfDisks.push_back(Ai[0]);
        while(true){
            int l=0,r=stackOfDisks.size(),m=(l+r)/2;
            while(l<r){
                m=(l+r)/2;
                if(Ai[i]>Ai[m]){

                }
            }
            break;
        }
    }
}

