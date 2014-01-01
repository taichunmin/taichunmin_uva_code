#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(int argc, char *argv[])
{
    srand(time(NULL));
    if(argc!=2) return -1;
    int input_cnt = atoi(argv[1]);
    cout<<input_cnt<<endl;
    for(int T=0;T<input_cnt;T++)
    {
        int ia = rand()%500;
        cout<<ia;
        for(int i=0;i<ia;i++)
            cout<<' '<<rand()%30000;
        cout<<endl;
    }
}
