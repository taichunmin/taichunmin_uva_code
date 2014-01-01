#include<iostream>
using namespace std;

int main()
{
    char num[201]={0},input[101]={0};
    while(cin.getline(input,101))
    {
      if(input[0]=='0' && input[1]=='\0') break;
      int strl=strlen(input);
      for(int i=strl-1;i>-1;i--)
      {
        int j=(strl-1)-i;
        num[i]+=input[j]-'0';
      }
      for(int i=0;i<strl;i++)input[i]=0;
    }
    int s=strlen(num);
    for(int j=0;j<s;j++)
        {
            if(j==s-1 && num[j]>9)s++;
            num[j+1]+=num[j]/10;
            num[j]%=10;
        }
    bool d=0;
    for(int j=s-1;j>-1;j--)
      if(num[j]!=0)
      {
        d=1;
        break;
      }
    if(d==1)
      for(int j=s-1;j>-1;j--)cout<<int(num[j]);
    else
      cout<<'0';
    system("pause");
}
