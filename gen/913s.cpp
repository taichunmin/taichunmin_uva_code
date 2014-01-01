#include<iostream>
using namespace std;
int main()
{
  freopen("913i.txt","w",stdout);
  srand(time(NULL));
  for(int i=0;i<1000;i++)
  {
    int a=rand()%1000000000+1;
    if(a%2==1)
      cout<<a<<endl;
    else i--;
  }
}