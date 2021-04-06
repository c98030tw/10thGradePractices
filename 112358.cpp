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
	
	cout<<"輸入數字n,則顯示費氏數列第n項(建議n不要大於37)\n";
	cin>>n;
	
	answer=f(n);
	
	cout<<"第"<<n<<"項="<<answer; 
	
	return 0;
}
