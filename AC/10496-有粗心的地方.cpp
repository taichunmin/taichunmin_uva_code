#include<iostream>
using namespace std;

int mini;
int va,vb;//長寬
int vc,vd;//機器人起始位置
int ve;//呼叫器數量
int vf[400][2];//呼叫器座標 
bool vj[400];
void fa(int vh,int vi,int vg=0)
{//     目前x  目前y  步數
  bool ba=true;
  for(int i=0;i<ve;i++)
    if(vj[i])
    {
      ba=false;
      vj[i]=false;
      int temp=vf[i][0]-vh,temp2=0;
      temp2+=(temp>0)?(temp):(temp*-1);
      temp=vf[i][1]-vi;
      temp2+=(temp>0)?(temp):(temp*-1);
      fa(vf[i][0],vf[i][1],vg+temp2);//不可動到vg 
      vj[i]=true;
    }
  if(ba)
  {
    int temp=vc-vh;
    vg+=(temp>0)?(temp):(temp*-1);
    temp=vd-vi;
    vg+=(temp>0)?(temp):(temp*-1);
    if(vg<mini)mini=vg;
  }
}

int main()
{
  int t;
  cin>>t;
  for(int i=0;i<t;i++)
  {
    mini=2147483647;//記得重設 
    cin>>va>>vb;
    cin>>vc>>vd;
    vc--,vd--;//記得減1 
    cin>>ve;
    for(int i=0;i<ve;i++)
    {
      cin>>vf[i][0]>>vf[i][1];
      vf[i][0]--,vf[i][1]--;
      vj[i]=true;
    }
    fa(vc,vd);
    cout<<"The shortest path has length "<<mini<<endl;
  } 
}
/*
10 10
1 1
4
2 3
5 5
9 4
6 5

S000000000
0000000000
0100000000
0000000010
0000110000
0000000000
0000000000
0000000000
0000000000
0000000000
*/
