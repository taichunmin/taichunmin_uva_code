#include<iostream>
#include<vector>
using namespace std;

vector<int> aa,ab;

void fa(int ia,int ta)
{
  for(int i=0;i<ia;i++)
    ab.at(i)+=aa.at(ta*ia+i);
}

void fb(long long *max,int ia)
{
  long long sum=0;
  for(int i=0;i<ia;i++)
  {
    sum+=ab.at(i);
    if(sum<0)sum=0;
    else if(sum>*max)*max=sum;
  }
}

int main()
{
    int ia;cin>>ia;//大小
    aa.resize(ia*ia);
    ab.resize(ia);
    for(int i=0,j=ia*ia;i<j;i++)
      cin>>aa.at(i);
    long long max=aa.at(0);
    for(int i=0;i<ia;i++)
    {
      ab.clear();
      for(int j=i;j<ia;j++)
      {
        fa(ia,j);
        fb(&max,ia);
      }
    }
    cout<<max<<endl;
    system("pause");
}

/* 第一次的作法 時間超過 
int main()
{
    int ia;cin>>ia;//大小 
    vector<int> aa;
    aa.resize(ia*ia);
    for(int i=0,j=ia*ia;i<j;i++)
      cin>>aa.at(i);
    long long max=aa.at(0),sum;
    for(int i=0;i<ia;i++)
      for(int j=0;j<ia;j++)
          for(int k=0;k+i<ia;k++)
              for(int l=0;l+j<ia;l++)
              {
                sum=0;
                for(int m=0;m<=k;m++)
                  for(int n=0;n<=l;n++)
                    sum+=aa.at((i+m)*ia+j+n);
                if(max<sum)max=sum;
              }
    cout<<max<<endl;
    //system("pause");
}
*/ 
