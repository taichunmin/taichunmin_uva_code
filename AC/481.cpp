#include<iostream>
using namespace std;

int main()
{
  int va=0,vb[100010]={};
  int vc[100010]={};//回朔指標(原數列)
  while(cin>>vb[va++]);
  int vd[100010]={};//陣列的指標
  int no=1;//最大長度 
  vc[0]=-1;
  vd[0]=0;
  
  for(int i=1;i<va;i++)//原 
    for(int j=0;j<=no;j++)//暫 
    {
      if(j<no && vb[i]<=vb[vd[j]])//取代 
      {
        if(j>0)vc[i]=vd[j-1];
        else vc[i]=-1;
        vd[j]=i;
        break;
      }
      else if(j==no)//接後面 
      {
        vc[i]=vd[no-1];
        vd[no]=i;
        no++;
        break;
      }
    }
    
  for(int i=no-2;i>-1;i--)
    vd[i]=vc[vd[i+1]];
  cout<<no<<endl<<'-'<<endl;
  for(int i=0;i<no;i++)cout<<vb[vd[i]]<<endl;
  //system("pause");
}/* i=2 j=1
i    0  1  2  3  4  5  6  7
vb  -7 10  9  2  3  8  8  1
vc  -1  0  0  0  3  4  4  0

vd   0  7  4  6
    -7  1  3  8

final
vd   0  3  4  6
    -7  2  3  8
*/
