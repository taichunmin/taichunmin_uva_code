#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
  char aa[100001];
  unsigned int count;
  while(cin.getline(aa,100001))
  {
    count=0;
    int strl=strlen(aa);
    for(int i=0;i<strl;i++)
      if((aa[i]>64 && aa[i]<91) || (aa[i]>96 && aa[i]<123))
        if(aa[i+1]<65 || (aa[i]>90 && aa[i]<97) || aa[i]>122)
          count++;
    cout<<count<<endl;
  }
system("pause");
}
    
