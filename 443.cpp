#include<iostream>
using namespace std;

int main()
{
    long long Hum[5842];
    for(int i=1;i<11;i++)Hum[i]=i;//因前十個剛好是1到10
    int t=1,c2=5,c3=3,c5=2,c7=1;
    for(int i=11;i<5843;i++)
    {
      int uplim=2147483647;
      t=c7;
      if(t>c5)t=c5;
      if(t>c3)t=c3;
      if(t>c2)t=c2;
      for(int j=t;j<i+1;j++)
      {
        long long b2=Hum[j]*2,b3=Hum[j]*3,b5=Hum[j]*5,b7=Hum[j]*7;
        if(b7<Hum[i-1])continue;
        if(b2>Hum[i-1] && b2<uplim) 
	      {
	        uplim=b2;
	        c2=j;
	      }
	      if(b3>Hum[i-1] && b3<uplim) 
	      {
	        uplim=b3;
	        c3=j;
	      }
	      if(b5>Hum[i-1] && b5<uplim) 
	      {
	        uplim=b5;
	        c5=j;
	      }
	      if(b7>Hum[i-1] && b7<uplim) 
	      {
	        uplim=b7;
	        c7=j;
	      }
	      if(b2>uplim)break;
      }
      Hum[i]=uplim;
    }
    int s;
    while(cin>>s)
    {
      if(s==0)break;
      cout<<"The "<<s;
      if(s!=11 && s%10==1)cout<<"st";
      else if(s!=12 && s%10==2)cout<<"nd";
      else if(s!=13 && s%10==3)cout<<"rd";
      else cout<<"th";
      cout<<" humble number is "<<Hum[s]<<'.'<<endl;
    }
}
