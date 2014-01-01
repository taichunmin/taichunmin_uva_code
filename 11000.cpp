/*
  1+¤½+¥À
0 1
1 1+ 1
2 1+ 2+ 1
3 1+ 4+ 2
4 1+ 7+ 4
5 1+ 12+ 7
6 1+ 20+ 12
*/
#include<iostream>
using namespace std;

int main()
{
    unsigned int aa[510700]={1,2,4};
    for(int i=3;i<510700;i++)aa[i]=aa[i-1]+aa[i-2]+1;
    int t;
    while(cin>>t && t>0)
      cout<<aa[t-1]<<' '<<1+aa[t-1]+((t>1)?aa[t-2]:0)<<endl;
}
