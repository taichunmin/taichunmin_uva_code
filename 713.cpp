#include<iostream>
using namespace std;



int main()
{
    char aa[201],bb[201];
    int t;
    cin>>t;
    for(int t1=0;t1<t;t1++)
    {
      cin.getline(aa,201,' ');
      int aast=strlen(aa);
      cin.getline(bb,201);
      int bbst=strlen(bb);
      for(int i=0;i<aast/2;i++)
      {
        char team;
        int n=aast-i-1;
        team=aa[i];
        aa[i]=aa[n];
        aa[n]=team;
      }
    system("pause");
}
