/*
4
0 -2 -7 0
9 2 -6 2
-4 1 -4 1
-1 8 0 -2
*/

#include <iostream>
using namespace std;

int a1[100][100], a2[100][100], size;

int get(int arr[][100], int i, int j) {
  if (i < 0 || j < 0 || i >= size || j >= size) return 0;
  return arr[i][j];
}

void debug1(int arr[][100]) {
  for(int i=0; i<size; i++)
    for(int j=0; j<size; j++)
      cout << arr[i][j] << (j == size-1 ? '\n' : ' ');
}

int main() {
  cin >> size;
  for(int i=0; i<size; i++)
    for(int j=0; j<size; j++) {
      cin >> a1[i][j];
      a2[i][j] = a1[i][j] + get(a2, i-1, j) + get(a2, i, j-1) - get(a2, i-1, j-1);
    }
  // debug1(a1);
  // debug1(a2);
  int ans = a2[0][0], tmp;
  for(int i=0; i<size; i++)
    for(int j=0; j<size; j++)
      for(int k=-1; k<i; k++)
        for(int m=-1; m<j; m++) {
          tmp = a2[i][j] - get(a2, k, j) - get(a2, i, m) + get(a2, k, m);
          if (tmp > ans) ans = tmp;
        }
  cout << ans << endl;
}
