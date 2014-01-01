#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
    char aa[100001],bb[100001];
    while(cin.getline(aa,100001,' '))
    {
        cin.getline(bb,100001);
        int str1=strlen(aa),str2=strlen(bb); 
        bool n=0,e=1;
        if(str1>str2)
        {
          cout<<"No"<<endl;
          continue;
        }
        int j=0;
        for(int i=0;i<str1;i++)
        {  
          for(;j<str2;j++)
          {  
            if(aa[i]==bb[j])
            {
              n=1;
              j++;
              break;
            }
            else n=0;
          }
          if(n==0)
          {
            e=0;
            break;
          }
        }
        if(e==1)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
system("pause");
}
    
