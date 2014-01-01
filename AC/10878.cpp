#include<iostream>
using namespace std;

int main()
{
    char aa,res[1000001];
    bool bb=false;
    int count=0;
    while(cin.get(aa))
    {
      if(aa=='_')
      {
        for(int i=0;i<10;i++)cin.get();
        bb=!bb;
      }
      if(aa=='|')
      {
        int ascii=0;
        for(int i=0;i<10;i++)
        {
          cin.get(aa);
          if(aa==' ')
          {
            ascii*=2;
            continue;
          }
          else if(aa=='o')
          {
            ascii*=2;
            ascii+=1;
            continue;
          }
        }
        res[count++]=ascii;
        res[count]=0;
      }
      cin.get();
      if(!bb)
      {
        int strl=strlen(res);
        for(int i=0;i<strl;i++)cout<<res[i];
        break;
      }
    }
}
