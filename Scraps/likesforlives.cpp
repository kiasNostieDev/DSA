//
// Created by kiasnostie on 09/01/21.
// Related to https://www.codechef.com/problems/PLZLYKME
//

#include <bits/stdc++.h>
using namespace std;

long long int loveForLifeTrick(int Dl, int C){
    return Dl+(Dl*C);
}

int main(){
    long long int T,L,D,S,C;
    cin>>T;
    while(T--){
        scanf("%lld %lld %lld %lld",&L,&D,&S,&C);
        for(int i=2;i<=D;i++){
            S=loveForLifeTrick(S,C);
            if(S>=L)break;
        }
        if(S>=L)cout<<"ALIVE AND KICKING"<<endl;
        else cout<<"DEAD AND ROTTING"<<endl;
    }
}