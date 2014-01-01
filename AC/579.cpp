#include<iostream>
using namespace std;

int main()
{
    double tt,cc,total;
    int deg1,deg2;
    char bb;
    while(cin>>tt>>bb>>cc)
    {
        if(tt==0 && cc==0)break;
        if(tt==12)tt=0;
        tt*=30;
        tt+=cc*0.5;
        cc*=6;        
        if(tt>cc)total=tt-cc;
        else total=cc-tt;
        if(total>180)total=360-total;
        cout.setf(ios::fixed,ios::floatfield);
        cout.precision(3);
        cout<<total<<endl;
    }
//system("pause");
}
    
