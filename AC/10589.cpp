#include<iostream>
#include<cmath>
using namespace std;

bool d(double da,double db,int ib)
{
  for(int i=0;i<4;i++)
  {
    if(pow(da*da+db*db,0.5)>ib)return false;
    da=ib-da,db=ib-db;
    if(i==1)db=ib-db;
  }
  return true;
}

int main()
{
    int ia,ib;
    while(cin>>ia>>ib,ia+ib)
    {
      int ic=0; 
      double da,db;
      for(int i=0;i<ia;i++)
      {
        cin>>da>>db;
        if(d(da,db,ib))ic++;
      }
      cout.setf(ios::fixed,ios::floatfield);
      cout.precision(5);
      cout<<(double)ib*ib*ic/ia<<endl;
    }
    //system("pause");
}
