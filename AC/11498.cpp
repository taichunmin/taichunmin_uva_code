/*
3
2 1
10 10
-10 1
0 33
4
-1000 -1000
-1000 -1000
0 0
-2000 -10000
-999 -1001
0
*/

#include <iostream>
using namespace std;

string f1(int x1, int y1, int x2, int y2) {
  if (x1 == x2 || y1 == y2) return "divisa";
  if (x1 < x2) return (y1 < y2 ? "NE" : "SE");
  return (y1 < y2 ? "NO" : "SO");
}

int main() {
  int T;
  while(cin>>T, T) {
    int ia, ib, ic, id;
    cin >> ia >> ib;
    while(T--) {
      cin >> ic >> id;
      cout << f1(ia, ib, ic, id) << endl;
    }
  }
}
