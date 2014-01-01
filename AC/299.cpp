#include <iostream>
#include <algorithm>
#define oo 2147483647

using namespace std;

int L,ans;
int ra[50];

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        cin>>L;
        for(int i=0;i<L;i++)cin>>ra[i];
        ans=0;
        for(int i=0;i<L;i++)
            for(int j=1;j<L-i;j++)
                if(ra[j-1]>ra[j])
                {
                    ans++;
                    swap(ra[j-1],ra[j]);
                }
        cout<<"Optimal train swapping takes "<<ans<<" swaps."<<endl;
    }
}
