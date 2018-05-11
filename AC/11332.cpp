#include <iostream>
using namespace std;

int arr[100] = {};

int f1(int ia) {
  if (ia < 10) return ia;
  if (ia < 100 && arr[ia]) return arr[ia];
  int ib = 0, ic = ia;
  while(ic > 0) {
    ib += ic % 10;
    ic /= 10;
  }
  int ans = f1(ib);
  if (ia < 100) arr[ia] = ans;
  return ans;
}

int main() {
  int ia;
  while(cin>>ia, ia) {
    cout << f1(ia) << endl;
  }
}
