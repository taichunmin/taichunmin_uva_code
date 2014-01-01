#include<iostream>
using namespace std;

int main()
{
    long long aa[1500];
    int nowbig,cc,c2=3,c3=2,c5=1;
    long long n2,n3,n5;
    for(int i=0;i<6;i++)aa[i]=i+1;
    for(int count=6;count<1500;count++)
    {
      nowbig=2147483647; 
      cc=c2;
      if(cc>c3)cc=c3;
      if(cc>c5)cc=c5;
      for(int k=cc;k<count;k++)
      {
        n2=2*aa[k]; n3=3*aa[k]; n5=5*aa[k];
      	if (n2>aa[count-1] && n2<nowbig) 
	       {
	         nowbig=n2;
	         c2=k;
	       }
      	else if (n3>aa[count-1] && n3<nowbig)
      	{
	       nowbig=n3;
	       c3=k;
	       }
	       else if (n5>aa[count-1] && n5<nowbig)
	       {
	       nowbig=n5;
	       c5=k;
	       }
      }
      aa[count]=nowbig;
    }
    cout<<"The 1500'th ugly number is "<<aa[1499]<<"."<<endl;    
    system("pause");
}
