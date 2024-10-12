// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/EZSPEAK

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	unsigned int totalCases;
	cin>>totalCases;
	while(totalCases--){
	    unsigned int caseLength, consonantCount = 0;
	    cin>>caseLength;
	    while(caseLength--){
	        if(consonantCount >= 4){
	            printf("NO\n");
	            break;
	        }
	        unsigned int testCase;
	        scanf("%c", &testCase);
	       // 97, 101, 105, 111, and 11
	        if((testCase == 105 || testCase == 97 || testCase == 111 || testCase == 101 || testCase == 117)){
	            consonantCount = 0;
	        } else {
	            consonantCount += 1;
	        }
	    }
	    if(consonantCount < 4){
	        printf("YES\n");
	    }
	}
}
