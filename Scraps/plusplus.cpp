//
// Created by kiasnostie on 18/01/21.
// Related to https://www.codechef.com/LRNDSA02/problems/COMPILER
//

#include <bits/stdc++.h>
using namespace std;

void stackStyle(string c){
    stack<char> parser;
    long long valid = 0;
    for (char &i : c) {
        if(c[0]=='>')break;
        if (!(i == '>' || i == '<'))break;
        if (i == '<')parser.push(i);
        if (i == '>') {
            if (parser.empty())break;
            parser.pop();
            valid += 2;
        }
    }
    if(!parser.empty())valid=0;
    cout << valid << endl;
    return;
}

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        string c;
        int cnt=0,pos=0;
        cin >> c;
//        stackStyle(c);
        for(long long i=0;i<c.size();i++){
            if(c[i]=='<')cnt++;
            if(c[i]=='>'){
                cnt--;
                if(cnt==0)pos=i+1;
                if(cnt<0)break;
            }
        }
        printf("%d\n",pos);
    }
}