#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int n;
	cout<<"�п�J���Zn"<<"\n";
	cin>>n;
	
	if(n<60)
	{
		cout<<"���ή�";
	}
	else if(n>=80)
	{
		cout<<"�u�q" ;
	}
	else
	{
		cout<<"�ή�";
	}
	return 0;
}
