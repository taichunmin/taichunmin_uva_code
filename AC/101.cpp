#include<iostream>
#define SIZE 25
using namespace std;

int s[SIZE][SIZE], pos[SIZE], cnt[SIZE];

int main() {
  int n, arg1, arg2, ia, ib, ic, id;
  cin>>n;
  string op1, op2;
  // initialize
  for(int i=0; i<n; i++) {
    s[i][0] = i;
    pos[i] = i;
    cnt[i] = 1;
  }
  while(cin>>op1, op1[0] != 'q') {
    cin >> arg1 >> op2 >> arg2;
    if (pos[arg1] == pos[arg2]) continue;
    if (op2[1] == 'n') {// return any blocks that are stacked on top of block b
      ia = pos[arg2];
      while (s[ia][ cnt[ia]-1 ] != arg2) {
        ib = s[ia][ cnt[ia]-1 ];
        s[ib][cnt[ib]++] = ib;
        pos[ib] = ib;
        cnt[ia]--;
      }
    }
    if (op1[0] == 'm') {// return any blocks that are stacked on top of block a
      ia = pos[arg1];
      while (s[ia][ cnt[ia]-1 ] != arg1) {
        ib = s[ia][ cnt[ia]-1 ];
        s[ib][cnt[ib]++] = ib;
        pos[ib] = ib;
        cnt[ia]--;
      }
    }
    // put a and any blocks that are stacked above block a to b
    ia = pos[arg1];
    ib = pos[arg2];
    ic = cnt[ia]-1;
    while(ic > 0 && s[ia][ic] != arg1) ic--;
    for(int i=ic; i<cnt[ia]; i++) {
      s[ib][cnt[ib]++] = s[ia][i];
      pos[ s[ia][i] ] = ib;
    }
    cnt[ia] = ic;
  }
  for (int i=0; i<n; i++) {
    cout << i << ':';
    for (int j=0; j<cnt[i]; j++)
      cout << ' ' << s[i][j];
    cout << endl;
  }
}
