/*
abc
acb
bac
bca
cab
cba
aab
aba
baa
*/

#include<iostream>
#include<algorithm>
using namespace std;

bool fn(string &str) {
  int len = str.size(), ia = len-1, ib;
  while (ia > 0 && str[ia-1] >= str[ia]) ia--;
  if (ia == 0) return false;
  // cout << "ia = " << ia << endl;
  for (int i=len-1; i>=ia; i--)
    if (str[ia-1] < str[i]) {
      swap(str[ia-1], str[i]);
      break;
    }
  // cout << "str1 = " << str << endl;
  ib = (len - ia) >> 1;
  for(int i=0; i < ib; i++) swap(str[ia + i], str[len-1-i]);
  return true;
}

int main () {
  string str;
  while (cin>>str, str!="#") {
    if ( fn(str) ) cout << str << endl;
    else cout << "No Successor" << endl;
  }
}
