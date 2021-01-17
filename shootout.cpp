//
// Created by kiasnostie on 16/01/21.
// Related to https://www.codechef.com/LRNDSA02/problems/PSHOT
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    int T=0,N=0;
    cin>>T;
    cout<<T;
    while(T--){
        queue<int> penalty;
        int result, a=0, b=0;
        scanf("%d",&N);
        for(int i=0;i<2*N;i++){
            int c;
            scanf("%1d",&c);
            a = i%2!=0 ? a+c : a;
            b = i%2==0 ? b+c : b;
            result = a>b ? 0 : 1;
            result = a==b ? -1 : result;
            penalty.push(c);
        }

        int A=0,B=0;
        for(int i=1;i<=2*N;i++){
            if(i%2!=0){
                int front = penalty.front();
                penalty.pop();
                A+=front;
                int letsSayB = (N-(i/2)-1);
                cout<<i<<"i ";
                cout<<front<<"Front "<<A<<"A ";
                cout<<letsSayB+B<<"LSSB ";
                cout<<endl;
                if(A > letsSayB+B && result == 0){
                    cout<<i+1<<"Jadhav"<<endl;
                    break;
                }
            }else{
                int front = penalty.front();
                penalty.pop();
                B+=front;
                int letsSayA = (N-(i/2)-1);
                cout<<i<<"i ";
                cout<<front<<"Front "<<B<<"B ";
                cout<<letsSayA+A<<"LSSA ";
                cout<<endl;
                if(B > letsSayA+A && result == 1){
                    cout<<i+1<<"Jadhav"<<endl;
                    break;
                }
            }
        }
        cout<<N<<endl;
    }
}