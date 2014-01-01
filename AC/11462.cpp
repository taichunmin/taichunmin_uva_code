//11462 d190
#include<iostream>
using namespace std;

int na[2000000];
int comp(const void *a,const void *b)
{
  return *(int*)a-*(int*)b;
}

int main()
{
  int ta;
  while(cin>>ta,ta)
  {
    for(int i=0;i<ta;i++)cin>>na[i];
    qsort(na,ta,sizeof(int),comp);
    for(int i=0;i<ta-1;i++)cout<<na[i]<<' ';
    cout<<na[ta-1]<<endl;
  }
  //system("pause");
}
