#include<iostream>
using namespace std;

int f91(int);

int main()
{
    int n,k;
    while(cin>>n) 
    {
        if(n==0) break;
        k=f91(n);
        cout<<"f91("<<n<<") = "<<k<<endl;
    }
    system("pause");
}

int f91(int N)
{
    //cout<<N<<endl;
    if(N<101) return f91(f91(N+11));
    if(N>100) return N-10;
}
