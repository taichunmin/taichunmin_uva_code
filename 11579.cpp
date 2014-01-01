//d269: 11579 - Triangle Trouble  WA
#include<iostream>
#include<cmath>
using namespace std;

int comp(const void* a,const void* b)//由大到小 
{
  if(*(double*)a>*(double*)b)return -1;
  if(*(double*)a==*(double*)b)return 0;
  if(*(double*)a<*(double*)b)return 1;
}

int main()
{
  double nda[10000],da;
  int ta,ia,ib;
  cin>>ta;
  for(int t1=0;t1<ta;t1++)
  {
    cin>>ia;
    for(int i=0;i<ia;i++)cin>>nda[i];
    qsort(nda,ia,sizeof(double),comp);
    ib=0;
    da=0;
    for(int i=2;i<ia && ib<2;i++)
      if(nda[i]+nda[i-1]>nda[i-2] && nda[i-2]-nda[i-1]<nda[i])
        ib=i;
    if(ib==0)cout<<"0.00"<<endl;
    else
    {
      cout.setf(ios::fixed,ios::floatfield);
      cout.precision(2);
      for(int i=ib-2;i<=ib;i++)da+=nda[i];
      da/=2;
      cout<<sqrt(da*(da-nda[ib-2])*(da-nda[ib-1])*(da-nda[ib]))+0.0001<<endl;
    }
  }
  //system("pause");
}
