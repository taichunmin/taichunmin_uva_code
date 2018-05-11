#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

vector<short> m[200];
short c[200], q[200], q_cnt, points, lines, ia, ib;

void debug_m() {
  for(int i=0; i<points; i++) {
    cout << i << " = ";
    for(auto j=0; j<m[i].size(); j++)
      cout << m[i][j] << (j + 1 == m[i].size() ? "" : " ");
    cout << endl;
  }
}

bool bicolorable () {
  memset(&c, 0, sizeof(c));
  memset(&q, 0, sizeof(q));
  q_cnt = 1;
  c[0] = 1;
  for(int i=0; i<points; i++) {
    int base = q[i];
    // cout << "base = " << base << ", color = " << c[base] << endl;
    while(m[base].size()) {
      int poped = m[base].back();
      m[base].pop_back();
      if (!c[poped]) {
        q[q_cnt++] = poped;
        c[poped] = 3 - c[base];
      }
      // cout << "poped = " << poped << ", color = " << c[poped] << endl;
      if (c[base] == c[poped]) return false;
    }
  }
  return true;
}

int main() {
  for(int i=0; i<200; i++) m[i].reserve(200);
  while(cin>>points, points) {
    cin >> lines;
    // reset
    for(int i=0; i<points; i++) m[i].resize(0);
    while(lines--) {
      cin >> ia >> ib;
      m[ia].push_back(ib); // connected
    }
    // debug_m();
    cout << (bicolorable() ? "BICOLORABLE." : "NOT BICOLORABLE.") << endl;
  }
}
