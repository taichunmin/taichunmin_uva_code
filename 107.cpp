#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int hi,cat;
    while(cin>>hi>>cat)
    {
      if(hi==0 && cat==0)break;
      if(hi==1 && cat==1)
      {
        cout<<"0 1"<<endl;
        continue;
      }
      int N,level;
      for(int i=2;i<=2147483647;i++)
      {
        double team1=log10(hi)*log10(i);
        double team2=log10(cat)*log10(i+1);
        if(team1=team2)
        {
          N=i;
          level=(int)team1;
          break;
        }
      }
      int nowork=0,hight=0;
      for(int i=0;i<level;i++)
      {
        int a=cat,b=1;
        nowork+=b;
        hight+=a*b;
        a/=(N+1);
        b*=N;
      }
      cout<<nowork<<' '<<hight<<endl;
    }        
}

/* 
其實是解以下方程式....
(1+N)^level=216
N^level=125
得到 N=5 level=3
有多少隻貓是沒有在工作的:是等比級數... 5^0+5^1+5^2=31 (不算第三層是因為第三層是最小的貓)
所有貓的高度的總和... 5^0*216 + 5^1*216/(6^1) + 5^2*216/(6^2) + 5^3*216/(6^3)=671

有問題....可找我....
MSN:past-now-future@hotmail.com 

有critical input....當1 1時....
我為了你去翻以前的code.....希望你能Accept!^^~
if(H==1 && T==1)
{
  printf("%d %dn",0,1);
}
else
{
......
}
*/
