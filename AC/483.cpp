#include<iostream>
#include<sstream>
using namespace std;

int main()
{
    //freopen("483.in","r",stdin);
    //freopen("483.out","w",stdout);
	 char a[10000];
    stringstream ss(stringstream::in | stringstream::out);
    bool first=true;
    while(cin.getline(a,10000))
    {
        /*
		  if(!first)cout<<endl;
        else first=false;
        */
        ss.clear();
        ss<<a;
        bool firsts=true;
        while(ss>>a)
        {
            if(!firsts)cout<<' ';
        		else firsts=false;
				int strl=strlen(a);
            for(int i=strl-1;i>-1;i--)
                cout<<a[i];
        }
		  cout<<endl;
    }
}
