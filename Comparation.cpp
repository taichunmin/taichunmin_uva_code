#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main()
{
  string f1,f2;
  cout<<"�п�J�ɮ׸��|:(�����ɫᵪ����)"<<endl;
  while(cin>>f1>>f2)
  {
    ifstream file1(f1.c_str()),file2(f2.c_str());
    if(!file1 || !file2)
    {
      cout<<"�ɮ׿�J����"<<endl;
    }
    else
    {
      cout<<"�ɮ׿�J���\\"<<endl;
      string a,b;
      bool ca=false,pass=true;
      int cb=0,count=0;
      while(1)
      {
        if(!getline(file2,b))break;
        if(!getline(file1,a))
        {
          cout<<"�����ɤ񵪮��ɤ�"<<endl; 
          ca=true;
        } 
        else
        { 
          count++;
          if(a!=b)
          {
            cout<<"�b"<<count<<"�椣��"<<endl;
            cb++;
          }
        } 
        if(ca || cb>0)pass=false;
      }
      if(!pass)
      {
        cout<<"�@��"<<cb<<"�ӿ��~"<<endl;
        cout<<"false"<<endl;
      }
      else cout<<"true"<<endl;
    }
    cout<<"�п�J�ɮ׸��|:(�����ɫᵪ����)"<<endl;
  }
  system("pause");
}
