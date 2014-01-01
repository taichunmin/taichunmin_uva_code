#include<iostream>
using namespace std;

int main()
{
    char aa[]={' ',
               '1','2','3','4','5','6','7','8','9','0','-','=',
               'W','E','R','T','Y','U','I','O','P','[',']','\\',
               'S','D','F','G','H','J','K','L',';','\'',
               'X','C','V','B','N','M',',','.','/'};
    char bb[]={' ',
               '`','1','2','3','4','5','6','7','8','9','0','-',
               'Q','W','E','R','T','Y','U','I','O','P','[',']',
               'A','S','D','F','G','H','J','K','L',';',
               'Z','X','C','V','B','N','M',',','.'};
    char cc[1001];
    int aalon=strlen(aa);
    while(cin.getline(cc,1001))
    {
      int strl=strlen(cc);
      for(int i=0;i<strl;i++)
      {
        for(int j=0;j<aalon;j++)
          if(aa[j]==cc[i]) cout<<bb[j];
      }
      cout<<endl;
    }
}
