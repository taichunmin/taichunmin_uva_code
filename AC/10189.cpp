#include<iostream>
#include<vector>
using namespace std;

int ic[16]={-1,-1,
            -1,0,
            -1,1,
            0,-1,
            0,1,
            1,-1,
            1,0,
            1,1};

int main()
{
   int ia,ib,t1=0;
   char ca;
   vector<int> va;
   while(cin>>ia>>ib,ia+ib)
   {
      va.clear();
      //cout<<"ia="<<ia<<" ib="<<ib<<endl;
      va.resize(ia*ib);
      for(int i=0;i<ia;i++)
         for(int j=0;j<ib;j++)
            va.at(i*ib+j)=0;
      for(int i=0;i<ia;i++)
         for(int j=0;j<ib;j++)
         {
            cin>>ca;
            if(ca=='*')
            {
               va.at(i*ib+j)=-1;
               //cout<<'*'<<i<<':'<<j<<':'<<i*ib+j<<endl;
               for(int k=0;k<8;k++)
               {
                  int a=i+ic[2*k],b=j+ic[2*k+1];
                  if(a<0 || a>ia-1 || b<0 || b>ib-1)continue;
                  //cout<<'+'<<a<<':'<<b<<':'<<a*ib+b<<endl;
                  if(va.at(a*ib+b)!=-1)va.at(a*ib+b)++;
               }
            }
         }
      if(t1>0)cout<<endl;
      cout<<"Field #"<<++t1<<':'<<endl;
      for(int i=0;i<ia;i++)
      {
         for(int j=0;j<ib;j++)
            if(va.at(i*ib+j)==-1)cout<<'*';
            else cout<<va.at(i*ib+j);
         cout<<endl;
      }
   }
}
