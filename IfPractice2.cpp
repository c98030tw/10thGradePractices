#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int n;
	cout<<"請輸入成績n"<<"\n";
	cin>>n;
	
	if(n<60)
	{
		cout<<"不及格";
	}
	else if(n>=80)
	{
		cout<<"優秀" ;
	}
	else
	{
		cout<<"及格";
	}
	return 0;
}
