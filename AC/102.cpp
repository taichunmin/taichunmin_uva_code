#include<iostream>
using namespace std;

int main()
{
    char aa[6][5]={"BCG ","BGC ","CBG ","CGB ","GBC ","GCB "};
    //1B 2G 3C 4B 5G 6C 7B 8G 9C
    int bb[6]={168,159,348,357,249,267};
    int num[9];
    while(cin>>num[0])
    {
      for(int i=1;i<9;i++)cin>>num[i];
      int sav=0;
      long long val=2147483647;//max of int 
      for(int i=0;i<6;i++)
      {
        int n[3];
        int temp=bb[i];
        for(int j=0;j<3;j++)
        {
          n[j]=temp%10;
          temp/=10;
        }
        long long total=0;
        for(int j=0;j<9;j++)
          if(j!=n[0]-1 && j!=n[1]-1 && j!=n[2]-1)
            total+=num[j];
        if(val>total)
        {
          val=total;
          sav=i;
        }
        //cout<<"//"<<aa[i]<<total<<endl;
      }
      cout<<aa[sav]<<val<<endl;
    }
}
