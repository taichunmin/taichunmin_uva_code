#include<iostream>
using namespace std;

bool isPalindrome(string str) {
  int ia = str.size()/2, ib = str.size()-1;
  for(int i=0; i<ia; i++)
    if (str[i] != str[ib-i]) return false;
  return true;
}

char reverseChar[128] = {};
string reverseStr[] = {
  "ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789",
  "A---3--HIL-JM-O---2TUVWXY51SE-Z--8-",
};

void buildMirror() {
  for(int i=0; i<reverseStr[0].size(); i++)
    reverseChar[reverseStr[0][i]] = reverseStr[1][i] != '-' ? reverseStr[1][i] : 0;
}

bool isMirrored(string str) {
  int ia = str.size()/2, ib = str.size()-1;
  for(int i=0; i<=ia; i++)
    if (reverseChar[str[i]] != str[ib-i]) return false;
  return true;
}

string criteria [] = {
  " -- is not a palindrome.",
  " -- is a regular palindrome.",
  " -- is a mirrored string.",
  " -- is a mirrored palindrome.",
};

int main() {
  buildMirror();
  string str;
  while(cin>>str) {
    int ans = (isMirrored(str) << 1) + isPalindrome(str);
    cout << str << criteria[ans] << endl << endl;
  }
}
