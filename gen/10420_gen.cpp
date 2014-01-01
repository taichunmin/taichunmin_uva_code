#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>
using namespace std;

char rand_alpha( bool upper = false, int rand_round = 26 )
{
    return (char)( 'A' + rand()%rand_round + upper * 32 );
}
string rand_name( int method = 0 )
{
    string sa;
    int size = rand() % 100;
    switch(method)
    {
    case 0:
        size = ( size<50 ? rand()%3+2 : ( size<90 ? rand()%3+4 : rand()%18+6 ));

        for(int i=0;i<size;i++)
            sa += rand_alpha( i );
        return sa;
        break;
    case 1:
        size = ( size<50 ? rand()%3+2 : ( size<90 ? rand()%3+4 : rand()%18+6 ));
        for(int i=0;i<size;i++)
            sa += rand_alpha( i, 5 );
        return sa;
        break;
    }
}

int main(int argc, char *argv[])
{
    srand(time(NULL));
    if(argc!=2) return -1;
    int caseCnt = atoi(argv[1]);

    cout<<caseCnt<<endl;
    for(int T=0;T<caseCnt;T++)
        cout<<rand_name(rand()%2)<<" "<<rand_name()<<" "<<rand_name()<<endl;
}
