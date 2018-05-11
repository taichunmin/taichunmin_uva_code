#include <iostream>
#include <cmath>
using namespace std;

int main() {
  long long T, ia;
  cin >> T;
  while(T--) {
    cin >> ia;
    ia = ((ia * 63 + 7492) * 5 - 498) / 10 % 10;
    cout << (ia >= 0 ? ia : -ia) << endl;
  }
}
