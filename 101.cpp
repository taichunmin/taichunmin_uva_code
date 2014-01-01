#include<iostream>
using namespace std;

int main()
{
    int va;
    while(cin>>va)
    {
      int vb[va][va]={},vc,vd,mode;
      char ca[10],cb[10];
      while(cin>>ca)
      {
        if(ca[0]==q)break;
        cin>>vc>>cb>>vd;
        if(ca[0]==m)(cb[1]==n)?mode=1:mode=2;//move a onto b -> 1 ; move a over b -> 2
        if(ca[0]==p)(cb[1]==n)?mode=3:mode=4;//pile a onto b -> 3 ; pile a over b -> 4
}
