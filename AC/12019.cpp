#include <iostream>

using namespace std;

int main()
{
    int mo[]={0,31,28,31,30,31,30,31,31,30,31,30};
    string sa[]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
    int T;
    cin>>T;
    while(T--)
    {
        int m,d;
        cin>>m>>d;
        int cnt=5;
        for(int i=0;i<m;i++)
            cnt+=mo[i];
        cnt+=d;
        cout<<sa[cnt%7]<<endl;
    }
}
