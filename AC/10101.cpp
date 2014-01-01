#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<string>
using namespace std;

char *unit[] = {"", " shata", " hajar", " lakh", " kuti"};

void bangla_numbers(string sa, bool kuti = false)
{
    if(sa.size()>7)
    {
        bangla_numbers( sa.substr(0, sa.size()-7), true );
        sa = sa.substr( sa.size()-7 );
    }
    int ia = atoi( sa.c_str() );
    if(ia)
    {
        int arra[4]={};
        for(int i=0;i<4;i++)
        {
            int ic = ( i==1 ? 10 : 100 );
            arra[i] = ia % ic;
            ia /= ic;
        }
        for(int i=3; i>=0; i--)
            if(arra[i]!=0)
                printf(" %d%s", arra[i], unit[i]);
    }
    if(kuti) printf( unit[4] );
}

int main()
{
    int caseCnt = 0;
    char ca[100];
    while(cin>>ca)
    {
        printf("%4d.",++caseCnt);
        if(strlen(ca)==1 && ca[0]=='0')
        {
            puts(" 0");
            continue;
        }
        bangla_numbers(ca);
        puts("");
    }
}
