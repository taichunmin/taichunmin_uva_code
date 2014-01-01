//a + b = d - c
#include<iostream>
#include<cstdlib>
#include<vector>
using namespace std;

int compare(const void* a,const void* b)
{ return *(int*)a-*(int*)b; }

int main()
{
    int va[1000];
    int ta;
    while(cin>>ta && ta!=0)
    {
      for(int i=0;i<ta;i++)cin>>va[i];
      qsort(va,ta,sizeof(int),compare);
      int vb=ta*ta;
      vector<int> vc;// a + b °}¦C
      for(int i=0;i<ta;i++)
        for(int j=0;j<ta;j++)
          if(i!=j)vc.push_back(va[i]+va[j]);//a + b °}¦C
          else vc.push_back(-2147483648);
      /*
      for(int i=0;i<ta;i++)
      {
        for(int j=0;j<ta;j++)
        {
          cout.width(3);
          cout<<vc.at(i*ta+j);
        }
        cout<<endl;
      }
      system("pause");
      cout<<endl<<endl;
      */
      int *p=NULL;
      for(int i=ta-1;i>-1;i--)
        for(int j=0;j<ta;j++)
        {
          if(i==j)continue;
          int find=va[i]-va[j];
          for(int k=0;k<ta;k++)
          {
            if(k==i || k==j)continue;
            for(int l=0;l<ta;l++)
            {
              if(l==i || l==j || k==l)continue;
              if(vc.at(k*ta+l)==find)p=&va[i];
            }
          }
          if(p!=NULL)
          {
            i=-1;
            break;
          }
        }
      if(p!=NULL)cout<<*p<<endl;
      else cout<<"no solution"<<endl;
    }
}
