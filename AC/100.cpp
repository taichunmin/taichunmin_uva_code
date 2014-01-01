#include<iostream>
using namespace std;
int cc=1;

int aa(int n=1)
{
    if(n==1) return cc;
    else if(n%2==1)
    {
        cc++; 
        return aa(3*n+1);
    }
    else if(n%2==0)
    {
        cc++;
        return aa(n/2);
    }        
}
    
int main()
{
    int i,j;
    while(cin>>i>>j)
    {
        cout<<i<<' '<<j<<' ';
        if(i>j)
        {
            int team;
            team=i;
            i=j;
            j=team;
        }
        int ans=0;
        for(int s=i;s<=j;s++)
        {
            int dd;
            dd=aa(s);
            if(dd>ans)ans=dd;
            cc=1;
        }
        cout<<ans<<endl;
    }
//system("pause");
}  
