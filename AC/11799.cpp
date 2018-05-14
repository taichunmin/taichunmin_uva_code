#include<iostream>
using namespace std;

int main() {
  int t1;
  cin>>t1;
  for(int t2=1; t2<=t1; t2++) {
    int t3, ia, ans = 0;
    cin>>t3;
    while(t3--) {
      cin>>ia;
      if(ia > ans) ans = ia;
    }
    cout << "Case " << t2 << ": " << ans << endl;
  }
}
