#include<iostream>
using namespace std;

int na[101][101];

int main()
{
  //freopen("","r",stdin);
  //freopen("","w",stdout);
  int ta;
  while(cin>>ta,ta)
  {
    for(int i=1;i<=ta;i++)
    {
      cin>>na[i][i];
      for(int j=1;j<i;j++)na[i][j]=na[i][i];
    }
    for(int i=2;i<=ta;i++)
      for(int j=1;j<i;j++)
        na[i][j]+=na[i-1][j];
    /*
    for(int i=1;i<=ta;i++)
    {
      for(int j=1;j<=ta;j++)
        cout<<na[i][j]<<' ';
      cout<<endl;
    }
    system("pause");
    */
    for(int i=2;i<=ta;i++)
      for(int j=0;i+j<=ta;j++)
      {
        int max=-2147483647;
        for(int k=0;k<i-1;k++)//�d�� (j+1)~(i+j) 
        {
          if(na[1+j+k][1+j]-na[2+j+k][i+j]>max)max=na[1+j+k][1+j]-na[2+j+k][i+j];//����k 
          if(na[i+j][i+j-k]-na[1+j][i+j-k-1]>max)max=na[i+j][i+j-k]-na[1+j][i+j-k-1];//�k�쥪 
        }
        if(na[i+j][1+j]>max)max=na[i+j][1+j];//���� 
        na[1+j][i+j]=max;
      }
    cout<<na[1][ta]<<endl;
  }
  //system("pause");
}
