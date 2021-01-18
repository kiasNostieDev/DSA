//
// Created by kiasnostie on 18/01/21.
// Related to https://www.codechef.com/LRNDSA02/problems/STUPMACH
//

#include <bits/stdc++.h>
using namespace std;
inline int fastIO(){
    char c = getchar_unlocked();
    int x=0;
    for(;c<'0'||c>'9';c=getchar_unlocked());
    for(;c>='0' && c<='9';c=getchar_unlocked()){
        x = (x<<1)+(x<<3)+c-'0';
    }
    return x;
}

int main(){
    int T,N;
    T=fastIO();
    while(T--){
        N=fastIO();
        int capacity[N], checkpoint=N,sum=0,c=N,min=1001;
        for(int i=0;i<N;i++){
            capacity[i]=fastIO();
            if(min>capacity[i])min=capacity[i];
            sum+=min;
//            if(capacity[i]==0)checkpoint=i;
//            c=checkpoint;
        }
        cout<<sum<<endl;
//        break;
//        while(true){
//            sum+=checkpoint;
//            for(int i=0;i<c;i++){
//                capacity[i]-=1;
//                if(capacity[i]<=0)checkpoint=i;
//                cout<<capacity[i]<<" ";
//            }
//            cout<<endl;
//            c=checkpoint;
//            if(capacity[0]==0)break;
//        }
//        printf("%d\n",sum);
    }
}
