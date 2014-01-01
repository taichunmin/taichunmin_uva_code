#include<iostream>
using namespace std;

int main()
{
    char aa[81];
    int t;
    cin>>t;
    for(int t1=0;t1<t;t1++)
    {
      cin.getline(aa,81);
      int strl=strlen(aa);
      if(strl==0)
      {
        t1--;
        continue;
      }
      if(strl==1)
      {
        cout<<'1'<<endl;
        if(t1<t-1)cout<<endl;
        continue;
      }
      bool isrep=false,isshow=false;
      int re;
      for(re=1;re<(strl/2)+1;re++)
      {
        if(aa[re]!=aa[0] || strl%re!=0)
        {
          isrep=false;
          continue;
        }
        else
        {
          for(int i=re;i<strl;i+=re)
          {
            if(aa[i]==aa[0])isrep=true;
            else
            {
              isrep=false;
              break;
            }
            for(int j=0;j<re;j++)
            {
              if(aa[j]==aa[i+j])isrep=true;
              else
              {
                isrep=false;
                i=strl+1;
                break;
              }
            }
          }
          if(isrep)
          {
            cout<<re<<endl;
            isshow=true;
            break;
          }
        }
      }
      if(!isshow)cout<<strl<<endl;
      if(t1<t-1)cout<<endl;
    } 
}
