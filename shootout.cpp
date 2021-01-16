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
        queue<pair<int,int>> penalty;
        int result, a=0, b=0, count=0;
        scanf("%d",&N);
        for(int i=0;i<2*N;i++){
            int c;
            scanf("%1d",&c);
            a = i%2!=0 ? a+c : a;
            b = i%2==0 ? b+c : b;
            result = a>b ? 0 : 1;
            result = a==b ? -1 : result;
            penalty.push(make_pair(i%2!=0 ? 1 : 0,c));
        }
        int ca=0,cb=0,ra=N-1,rb=N-1,r;
        while(true){
            if(penalty.empty())break;
            pair<int,int> poppedVal = penalty.front();
            penalty.pop();
            ca = poppedVal.first == 0 ? ca+poppedVal.second : ca;
            cb = poppedVal.first == 1 ? cb+poppedVal.second : cb;
            ra = poppedVal.first == 0 ? ra-count+ca : ra;
            rb = poppedVal.first == 1 ? rb-count+cb : rb;
            if(ca>rb)r=0;
            else if(cb>ra)r=1;
            else r=-1;
            if(r==result)break;
            count++;
        }
        cout<<count<<endl;
    }
}