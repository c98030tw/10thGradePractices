#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int f(int n)
{
	if(n>2)
	{
		return n=f(n-1)+f(n-2);
	}
	else
	{
		return 1;
	}
	
}

int main(int argc, char** argv) {
	
	int n,answer;
	
	cout<<"��J�Ʀrn,�h��ܶO��ƦC��n��(��ĳn���n�j��37)\n";
	cin>>n;
	
	answer=f(n);
	
	cout<<"��"<<n<<"��="<<answer; 
	
	return 0;
}
