#include<iostream>
#include<cstdio>
using namespace std;

int main() {
  int t1;
  cin >> t1;
  for(int t2=1; t2<=t1; t2++) {
    int n, prev, next, high = 0, low = 0;
    cin >> n >> prev;
    n--;
    while(n--) {
      cin >> next;
      if (next > prev) high++;
      else if (next < prev) low++;
      prev = next;
    }
    printf("Case %d: %d %d\n", t2, high, low);
  }
}
