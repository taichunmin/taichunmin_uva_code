#include<iostream>
#include<cstring>
using namespace std;

bool simulation[3651];
int t, n, p, h, tmp, ans;

int main () {
  cin >> t;
  while (t--) {
    cin >> n >> p;
    memset(simulation, 0, sizeof(bool) * (n+1));
    while (p--) {
      cin >> h;
      tmp = h;
      while (tmp <= n) {
        simulation[tmp] = true;
        tmp += h;
      }
    }
    ans = 0;
    for (int i=0; i*7<=n; i++)
      for (int j=0, k=7*i+1; j<5 && k<=n; j++,k++)
        if (simulation[k]) ans++;
    cout << ans << endl;
  }
}
