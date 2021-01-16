//
// Created by kiasnostie on 07/01/21.
//

#include <bits/stdc++.h>
using namespace std;


int main(){
    int particles, limit, reactors;
    cin>>particles>>limit>>reactors;
    int reactorState[reactors];
    for(int i=0;i<reactors;i++)reactorState[i]=0;

    for(int i=1;i<=particles;i++){
        reactorState[0]++;
        int j=1;

        if(reactorState[0] > limit){
            reactorState[0] = 0;
            while(true){
                if(j>reactors)break;
                if(reactorState[j]+1 > limit){
                    reactorState[j] = 0;
                    j++;
                }else {
                    reactorState[j]++;
                    break;
                }
            }
        }
    }

    for(int i=0;i<reactors;i++){
        cout<<reactorState[i]<<" ";
    }
}