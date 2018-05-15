#include<iostream>
using namespace std;

long long bigmod(long long b, long long p, long long m) {
  if (p==0) return 1 % m;
  b %= m;
  if (p & 1) return ((b % m) * bigmod(b * b, (p >> 1), m)) % m;
  return bigmod(b * b, (p >> 1), m);
}

int main () {
  long long b, p, m, ans;
  while (cin>>b>>p>>m) {
    cout << bigmod(b, p, m) << endl;
  }
}

int main1 () {
  long long b, p, m, ans;
  while (cin>>b>>p>>m) {
    if (p==0) {
      b = 1;
      p = 1;
    }
    b %= m;
    ans = 1;
    while(p>0) {
      if (p & 1) {
        ans *= b;
        ans %= m;
      }
      p >>= 1;
      b = (b * b)%m; 
    }
    cout << ans << endl;
  }
}
