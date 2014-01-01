#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    char aa[1001];
    for(int i=0;i<t;i++)
    {
      int t1,b,count=0;
      cin>>t1;
      long long total=0;
      for(int j=0;j<t1;j++)
      {
        cin>>b;
        aa[j]=b;
        total+=b;
      }
      double aver=total/t1,c;
      for(int j=0;j<t1;j++)
        if(int(aa[j])>aver)count++;
      c=double(count*100)/t1;
      cout.precision(3);
      cout.setf(ios::fixed,ios::floatfield);
      cout<<c<<'%'<<endl;
    }
}
