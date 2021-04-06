#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int f(int x)
{
	if(x>1)
	{
		return x*f(x-1);
	}
	else
	{
		return 1;
	}
	
	return x;
}

int main(int argc, char** argv) {
	
	int x,y;
	
	while(1)
	{
	cout<<"輸入x則顯示x!(階乘)(x<12)\n";
	cin>>x;
	y=f(x); 
	
	cout<<"x!="<<y<<"\n";
	}
	return 0;
}
