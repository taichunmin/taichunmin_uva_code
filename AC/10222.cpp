#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
    char a1[27]={"dmbgthjkpl;'.,[]eyfuonrvic"};
    char bb[101];
    while(cin.getline(bb,101))
    {
      int strl=strlen(bb);
      for(int i=0;i<strl;i++)
        for(int j=0;j<27;j++)
          if(bb[i]==a1[j])
          {
            bb[i]='a'+j;
            break;
          }
      for(int i=0;i<strl;i++)cout<<bb[i];
      cout<<endl;
    }
    //system("pause");
}
