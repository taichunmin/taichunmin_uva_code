#include<iostream>
#include<algorithm>
using namespace std;

int main() {
  int n, ans, arr[1001];
  while (cin>>n) {
    ans = 0;
    for(int i=0; i<n; i++) cin>>arr[i];
    for(int i=0; i<n; i++)
      for(int j=n-1; j>i; j--)
        if (arr[j-1] > arr[j]) {
          swap(arr[j-1], arr[j]);
          ans++;
        }
    cout<<"Minimum exchange operations : "<<ans<<endl;
  }
}
