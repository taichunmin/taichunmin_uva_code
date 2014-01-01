#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main()
{
  string f1,f2;
  cout<<"請輸入檔案路徑:(測資檔後答案檔)"<<endl;
  while(cin>>f1>>f2)
  {
    ifstream file1(f1.c_str()),file2(f2.c_str());
    if(!file1 || !file2)
    {
      cout<<"檔案輸入失敗"<<endl;
    }
    else
    {
      cout<<"檔案輸入成功\"<<endl;
      string a,b;
      bool ca=false,pass=true;
      int cb=0,count=0;
      while(1)
      {
        if(!getline(file2,b))break;
        if(!getline(file1,a))
        {
          cout<<"測資檔比答案檔少"<<endl; 
          ca=true;
        } 
        else
        { 
          count++;
          if(a!=b)
          {
            cout<<"在"<<count<<"行不符"<<endl;
            cb++;
          }
        } 
        if(ca || cb>0)pass=false;
      }
      if(!pass)
      {
        cout<<"共有"<<cb<<"個錯誤"<<endl;
        cout<<"false"<<endl;
      }
      else cout<<"true"<<endl;
    }
    cout<<"請輸入檔案路徑:(測資檔後答案檔)"<<endl;
  }
  system("pause");
}
