#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> va[100];
    for(int i=0;i<100;i++)
    {
      va[i].resize(100);
      for(int j=0;j<i;j++)va[i].at(j)=0;
      va[i].at(i)=1;
    }//clear
    for(int i=0;i<100;i++)
    {
      for(int j=i+1;j<100;j++)
        va[i].at(j)=2*va[i].at(j-1)-va[i].at()
