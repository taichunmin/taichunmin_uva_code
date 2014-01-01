#include<iostream>
using namespace std;

int main()
{
    char ch;
    double aa[10][4];
    int t1=0;
    while(cin>>ch)
    {
      if(ch=='*')break;
      for(int i=0;i<4;i++)cin>>aa[t1][i];
      t1++;
    }
    double inx,iny;
    int fig;
    int t2=0;
    while(cin>>inx>>iny)
    {
      if(inx==9999.9 && iny==9999.9)break;
      t2++;
      fig=0;
      for(int i=0;i<t1;i++)
        if(aa[i][0]<inx && aa[i][1]>iny && aa[i][2]>inx && aa[i][3]<iny)
        {
          fig=i+1;
          break;
        }
      cout<<"Point "<<t2<<" is ";
      if(fig==0)
        cout<<"not contained in any figure";
      else  
        cout<<"contained in figure "<<fig;
      cout<<endl;
    }
}
