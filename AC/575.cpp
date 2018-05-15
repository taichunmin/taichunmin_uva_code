#include<iostream>
using namespace std;

unsigned val[31] = {};

int main () {
  for (int i=0; i<31; i++) val[i] = (2 << i) - 1;
  string str;
  while(cin>>str, str != "0") {
    unsigned ans = 0;
    for(int i=0; i<str.size(); i++)
      ans += val[i] * (str[str.size()-1-i] - '0');
    cout << ans << endl;
  }
}
