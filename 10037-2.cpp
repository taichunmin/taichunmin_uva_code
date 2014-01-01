#include<iostream>
using namespace std;

int cul(int cs,char *caa)
{
  if(cs==1)return (int)caa[0];
	if(cs==2)return (int)caa[1];
	if(cs==3)return (int)caa[1]+(int)caa[0]+(int)caa[2];
  if(cs>3)
  {
	  int x=cul(cs-2,caa);
		return (int)caa[1]+(int)caa[0]+(int)caa[cs-1]+(int)caa[1]+x;
  }
}

void shst(int sn,char *caa)
{
  if(sn==1)
  {
    cout<<(int)caa[0]<<endl;
  }
  if(sn==2)
  {
    cout<<(int)caa[0]<<' '<<(int)caa[1]<<endl;
  }
  if(sn==3)
  {
	  cout<<(int)caa[0]<<' '<<(int)caa[1]<<endl;
	  cout<<(int)caa[0]<<endl;
	  cout<<(int)caa[0]<<' '<<(int)caa[2]<<endl;
  }
	if(sn>3)
  {
    cout<<(int)caa[0]<<' '<<(int)caa[1]<<endl;
    cout<<(int)caa[0]<<endl;
    cout<<(int)caa[sn-2]<<' '<<(int)caa[sn-1]<<endl;
    cout<<(int)caa[1]<<endl;
    shst(sn-2,caa);
  }
}

int degression(int ds,char *daa,int dt,int total=0) 
{
  if(dt>0)
  {
    total+=(int)daa[ds-1]+(int)daa[0];
    return degression(ds-1,daa,dt-1,total);
  }
  else if(dt==0)
    return cul(ds,daa)+total;
}

void showstep(int sn,char *saa,int st)
{
  if(st>0)
  {
    cout<<(int)saa[0]<<' '<<(int)saa[sn-1]<<endl;
    cout<<(int)saa[0]<<endl;
    showstep(sn-1,saa,st-1);
  }
  else if(st==0)
    shst(sn,saa);
}

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
      int s;
      cin>>s;
      char *aa;
      aa=new char[s];
      for(int j=0;j<s;j++)
      {
        int q;
        cin>>q;
        aa[j]=q;
      }
      for(int c=0;c<s;c++)
        for(int v=c+1;v<s;v++)
          if(aa[c]>aa[v])
          {
					  char temp=aa[c];
					  aa[c]=aa[v];
					  aa[v]=temp;
				  }
			int zz;
			int mix=100001,x=0;
      for(int j=0;j<s+2;j++)
			{  
        zz=degression(s,aa,j);
        if(zz<mix)
			  {
          mix=zz;
          x=j;
        }
      }
		  cout<<mix<<endl;
		  showstep(s,aa,(int)x);
    }
		system("pause");
}
