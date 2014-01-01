#include<iostream>
using namespace std;

int main()
{
    int t1;
    cin>>t1;
    cin.get(),cin.get();
    char input[81];
    for(int t=0;t<t1;t++)
    {
      int no=0;
      int aa[10000],bb[10000],cc[10000],res[10000];//aa是數值 bb是數值 cc是前一個數的旗標
      while(cin.getline(input,81))
      {
        int strl=strlen(input);
        if(strl==0)break;
        aa[no]=0;
        for(int i=0;i<strl && input[i]>='0' && input[i]<='9';i++)
        {
          aa[no]*=10;
          aa[no]+=input[i]-'0';
        }
        no++;
      }
      bb[0]=1;
      cc[0]=-1;
      int highflag=bb[0],cohiflag=highflag;
      for(int i=1;i<no;i++)
      {
        for(cohiflag=highflag;cohiflag>-1;cohiflag--)
        {
          for(int j=i-1;j>-1;j--)
            if(bb[j]==cohiflag && aa[j]<aa[i])
            {
              cc[i]=j;
              bb[i]=bb[j]+1;
              if(bb[i]>highflag)highflag=bb[i];
              cohiflag=-1;
              break;
            }
          if(cohiflag==0)
          {
            bb[i]=1;
            cc[i]=-1;
          }
        }
      }
      cout<<"Max hits: "<<highflag<<endl;
      int last;
      for(int i=0;i<no;i++)
        if(bb[i]==highflag)
        {
          last=i;
          break;
        }
      for(int i=last,j=highflag-1;i>-1 && j>-1;j--)
      {
        res[j]=aa[i];
        i=cc[i];
      }
      //for(int i=0;i<no;i++)
      //{cout<<aa[i]<<' '<<bb[i]<<' '<<cc[i]<<endl;}
      for(int i=0;i<highflag;i++)
      {
        cout<<res[i]<<endl;
      }
      if(t<t1-1)cout<<endl;
    }
}

