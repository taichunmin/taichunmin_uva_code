#include<cstdlib>
#include<iostream>

using namespace std;

int main(void)
{
  int i,j;
  char ch[1000];
  char in [45]="1234567890-=WERTYUIOP[]\\SDFGHJKL;'XCVBNM,./ ";
  char out[45]="`1234567890-QWERTYUIOP[=ASDFGHJKL;ZXCVBNM,. ";
  while(cin.getline(ch,1000))
  {
    for(i=0;i<strlen(ch);i++)
    {
      for(j=0;j<44;j++)
      {
        if(ch[i]==in[j])
        {
          cout<<out[j];
          break;
        }
      }
    }
    cout<<endl;
  }
  system("pause");
  return 0;
}
