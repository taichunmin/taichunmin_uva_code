#include<iostream>
using namespace std;

int va,vb;
int vc[101][101];
char ca[102][102];
int vd;
    
void fa(int i,int j)
{
  vc[i][j]=vd;
  if(ca[i-1][j+1]=='@' && vc[i-1][j+1]==0)fa(i-1,j+1);//���W 
  if(ca[i  ][j+1]=='@' && vc[i  ][j+1]==0)fa(i  ,j+1);//�W 
  if(ca[i+1][j+1]=='@' && vc[i+1][j+1]==0)fa(i+1,j+1);//�k�W 
  if(ca[i+1][j  ]=='@' && vc[i+1][j  ]==0)fa(i+1,j  );//�k 
  if(ca[i+1][j-1]=='@' && vc[i+1][j-1]==0)fa(i+1,j-1);//�k�U 
  if(ca[i  ][j-1]=='@' && vc[i  ][j-1]==0)fa(i  ,j-1);//�U 
  if(ca[i-1][j-1]=='@' && vc[i-1][j-1]==0)fa(i-1,j-1);//���U 
  if(ca[i-1][j  ]=='@' && vc[i-1][j  ]==0)fa(i-1,j  );//�� 
} 

int main()
{
    while(cin>>va>>vb,va+vb)
    {
      for(int i=1;i<=va;i++)
        for(int j=1;j<=vb;j++)
          vc[i][j]=0;
      for(int i=0;i<=va+1;i++)
        for(int j=0;j<=vb+1;j++)
          ca[i][j]='*';//�h�@�h����� 
      vd=0;
      char cb;
      for(int i=1;i<=va;i++)
        for(int j=1;j<=vb;j++)
        {
          cin>>cb;
          ca[i][j]=cb;
        }
      cin.get();
      for(int i=1;i<=va;i++)
        for(int j=1;j<=vb;j++)
          if(ca[i][j]=='@' && vc[i][j]==0)vd++,fa(i,j);
      cout<<vd<<endl;
    }
}
