//
// Created by kiasnostie on 09/01/21.
//

#include<bits/stdc++.h>
using namespace std;

int main(){
    int T, count;
    cin>>T;
    while(T--){
        cin>>count;
        set<int> A;
        while(count--){
            int dummy;
            cin>>dummy;
            A.insert(dummy);
        }
        cout<<A.size()<<endl;
    }
}