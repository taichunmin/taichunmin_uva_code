#include<iostream>
using namespace std;

int main()
{
    char aa[1001];
    int count[129];
    bool first=true; 
    while(cin.getline(aa,1001))
    {
      if(!first)cout<<endl;
      first=false;
      int strl=strlen(aa);
      for(int i=0;i<129;i++)count[i]=0;
      for(int i=0;i<strl;i++)
      {
        int team=aa[i];
        count[team]++;
      }
      int Max=count[1];
      for(int i=2;i<129;i++)
        if(count[i]>Max)
          Max=count[i];
      for(int j=1;j<=Max;j++)
        for(int i=128;i>0;i--)
          if(count[i]==j)
            cout<<i<<' '<<j<<endl;
    }
}
