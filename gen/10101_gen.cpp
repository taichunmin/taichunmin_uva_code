#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>
using namespace std;

long long rand64()
{
    static int rand_max_bit = 0;
    if( rand_max_bit < 1 )
    {
        while( RAND_MAX >> rand_max_bit )
            rand_max_bit++;
    }
    long long ret = 0;
    for(int i=0;i<(sizeof(long long)<<3);i+=rand_max_bit)
        ret = (ret << rand_max_bit) | rand();
    if(ret<0) ret = -ret;
    return ret;
}

long long rand_for_10101(int len = 15)
{
    long long ret=0;
    for(int i=0;i<len;i++)
    {
        if( rand()%2 )
            ret += rand()%10;
        ret *= 10;
    }
    return ret;
}

int main(int argc, char *argv[])
{
    srand(time(NULL));
    if(argc!=2) return -1;
    int caseCnt = atoi(argv[1]);
    for(int T=0;T<caseCnt;T++)
    {
        if(!rand()%3)
            cout<<rand64()%999999999999999ll<<endl;
        else cout<<rand_for_10101()<<endl;
    }
}
