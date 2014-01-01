#include<iostream>
#include<map>
using namespace std;

typedef map<string,int> map_si;

int main()
{
    map_si msia;
    string sa, sb;
    int T;
    cin>>T;
    while(T--)
    {
        cin>>sa;
        getline(cin, sb);
        msia[sa]++;
    }

    for ( map_si::iterator it=msia.begin(); it!=msia.end(); ++it)
        cout << it->first << " " << it->second << endl;
}
