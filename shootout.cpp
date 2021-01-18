//
// Created by kiasnostie on 16/01/21.
// Related to https://www.codechef.com/LRNDSA02/problems/PSHOT
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    int T,N;
    scanf("%d",&T);
    while(T--){
        scanf("%d",&N);
        char penalty[2*N];
        scanf("%s",penalty);
        int ca=0,cb=0,ra=N,rb=N,r=2*N;
        for(int i=0;i<2*N;i++){
            if(i%2!=0){
                ca = penalty[i]=='1'? ca+1 : ca+0;
                ra--;
            }else{
                cb = penalty[i]=='1' ? cb+1 : cb+0;
                rb--;
            }
            if(ca>cb+rb || cb>ca+ra){
                r=i+1;
                break;
            }
        }
        printf("%d\n",r);
    }
}