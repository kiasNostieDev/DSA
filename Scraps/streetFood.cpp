//
// Created by kiasnostie on 14/01/21.
// Related to https://www.codechef.com/LRNDSA02/problems/STFOOD
//

#include<bits/stdc++.h>
using namespace std;

int main(){
    int T,N;
    scanf("%d",&T);
    while(T--){
        scanf("%d",&N);
        int s,v,p;
        int svpArray[N];
        for(int i=0;i<N;i++){
            scanf("%d%d%d",&s,&p,&v);
            svpArray[i] = (p/(s+1))*v;
        }
        int min = svpArray[0];
        for(int i=1;i<N;i++){
            if(min<svpArray[i])min=svpArray[i];
        }
        printf("%d\n",min);
    }
}
