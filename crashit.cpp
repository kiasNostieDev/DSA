//
// Created by kiasnostie on 10/01/21.
// Related to https://www.codechef.com/problems/CRSHIT
//

#include <bits/stdc++.h>
using namespace std;

void ifCrashes(int s, int p[], int si[], int N, int K){
    int c=0, flag=0;
    int pCopy[N];
    for(int i=0;i<N;i++)pCopy[i]=-1;
    while(s--){
        for(int i=0;i<N;i++){
            int j=0;
            for(;j<N;j++){
                if(pCopy[j]!=-1)continue;
                if(i==j)continue;
                int a = p[i]>0 ?-p[i] :p[i];
                int b = p[j]>0 ?-p[j] :p[j];
                a= a<(-K) ? a+K : a;
                b= b<(-K) ? b+K : b;
//                cout<<endl<<a<<" "<<b<<" "<<a+b+1<<endl;
                if(a+b+1 == -K){
                    c++;
                    flag = 1;
                    pCopy[i] = p[i]>0 ? p[i]-1-K : p[i]+1+K;
                    pCopy[j] = p[j]>0 ? p[j]-1-K : p[j]+1+K;
                    break;
                }
            }
            if(flag==0){
                pCopy[i] = p[i];
            }else flag = 0;
        }
        for(int i=0;i<N;i++)p[i]=pCopy[i];
        cout<<endl;
        for(int i=0;i<N;i++){
            p[i] = si[i]==1 ? p[i]+1 : p[i]-1;
            if(p[i]>0 && p[i]>K)p[i]-=K-1;
            if(p[i]<0 && p[i]<(-K))p[i]+=K+1;
            cout<<" "<<p[i]<<" ";
        }cout<<endl;
    }
    cout<<c<<endl;
}

int main() {
    int N, Q, K;
    scanf("%d%d%d", &N, &Q, &K);
    int positions[N],signs[N];
    for(int i=0;i<N;i++){
        scanf("%d%d",&signs[i],&positions[i]);
        if(signs[i] == 2)positions[i] = -positions[i];
    }
    for(int i=0;i<Q;i++){
        int seconds;
        scanf("%d",&seconds);
        ifCrashes(seconds, positions, signs, N, K);
    }
}