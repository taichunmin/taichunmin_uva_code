#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int T, a, b, c;
  cin >> T;
  for (int i=0; i<T; i++) {
    cin >> a >> b >> c;
    if (a > b) swap(a, b);
    if (a > c) swap(a, c);
    if (b > c) swap(b, c);
    cout << "Case " << (i+1) << ": " << b << endl;
  }
}
