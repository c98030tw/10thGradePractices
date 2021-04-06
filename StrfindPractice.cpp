#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a;
    string s1,s2;
    s2="term";
    
    cout <<"輸入一字串，找出字串中第一個term從第幾個字開始\n";
    cin>>s1;
    a=s1.find(s2,0);
    cout<<"第一個term從第"<<a+1<<"個字開始";
    
    return 0;
}

