#include<iostream>
using namespace std;

int main () {
  int T, ia, ib;
  cin >> T;
  while (T--) {
    cin >> ia >> ib;
    cout << (ia/3) * (ib/3) << endl;
  }
}
