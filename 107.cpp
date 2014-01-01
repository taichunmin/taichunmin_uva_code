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
���O�ѥH�U��{��....
(1+N)^level=216
N^level=125
�o�� N=5 level=3
���h�ְ��߬O�S���b�u�@��:�O����ż�... 5^0+5^1+5^2=31 (����ĤT�h�O�]���ĤT�h�O�̤p����)
�Ҧ��ߪ����ת��`�M... 5^0*216 + 5^1*216/(6^1) + 5^2*216/(6^2) + 5^3*216/(6^3)=671

�����D....�i���....
MSN:past-now-future@hotmail.com 

��critical input....��1 1��....
�ڬ��F�A�h½�H�e��code.....�Ʊ�A��Accept!^^~
if(H==1 && T==1)
{
  printf("%d %dn",0,1);
}
else
{
......
}
*/
