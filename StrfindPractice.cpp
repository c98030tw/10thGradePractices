#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a;
    string s1,s2;
    s2="term";
    
    cout <<"��J�@�r��A��X�r�ꤤ�Ĥ@��term�q�ĴX�Ӧr�}�l\n";
    cin>>s1;
    a=s1.find(s2,0);
    cout<<"�Ĥ@��term�q��"<<a+1<<"�Ӧr�}�l";
    
    return 0;
}

