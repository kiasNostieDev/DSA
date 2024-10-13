// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/EZSPEAK

#include <iostream>
using namespace std;

int main() {
  // your code goes here
  unsigned int totalCases;
  cin >> totalCases;
  while (totalCases--) {
    unsigned int caseLength, consonantCount = 0;
    cin >> caseLength;
    while (caseLength--) {
      char testCase;
      if (consonantCount >= 4) {
        caseLength+=1;
        while(caseLength--){
            scanf(" %c", &testCase);
        }
        break;
      }
      scanf(" %c", &testCase);
      // 97, 101, 105, 111, and 11
      if (((int)testCase == 105 || (int)testCase == 97 ||
           (int)testCase == 111 || (int)testCase == 101 ||
           (int)testCase == 117)) {
        consonantCount = 0;
      } else {
        consonantCount += 1;
      }
    }
    if (consonantCount < 4) {
      printf("YES\n");
    } else {
        printf("NO\n");
    }
  }
}
