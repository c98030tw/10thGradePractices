#include <iostream>
#include <string>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	
	string s1,s2;
	s2="milktea";
	
	cout<<"What is my favorite kind of drink?\n";
	
	{
		cin>>s1;
		
		
		if(s1==s2)
		{
		cout<<"CORRECT!";
		}
		else
		{
			cout<<"WRONG\n";
		}
	}
	return 0;
}
