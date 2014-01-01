#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
    char num[1001]={0},cul[1001]={0};
    while(cin.getline(num,1001))
    {
      int strl=strlen(num),slong=strl;
      int count=0;
      bool h=0;
      for(int i=strl-1;i>-1;i--)
        if(num[i]!='0')
        {
          h=1;
          break;
        }
      if(h==0)break;
      for(int i=0;i<strl;i++)cul[strl-i-1]=num[i]-'0';
      bool n=0,f=0;
      do
      {
        char *aa;
        char *bb;
        aa=n?num:cul;
        bb=n?cul:num;
        for(int j=slong-1;j>-1;j--) bb[j]=0;
        if((aa[slong-1]/9)>0)f=1;
        for(int j=slong-1;j>-1;j--)
        {
          bb[j]+=aa[j]/9;
          aa[j]%=9;
          aa[j-1]+=aa[j];
          bb[j-1]+=aa[j];
          aa[j]=0;
        }
        bb[0]=aa[0]/9;
        aa[0]%=9;
        if(aa[0]==0)count++;
        if(aa[0]!=0)break;
        if(f!=1)
        {
          slong--;
          f=0;
        }
        n=!n;
      }while(slong>0);
      if(count>0)cout<<num<<" is a multiple of 9 and has 9-degree "<<count<<".\n";
      else cout<<num<<"is not a multiple of 9.\n";
    }
    system("pause");
}
