#include <iostream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//1~n間質數 
using namespace std;

int main(int argc, char** argv) {
	int n,i,j,check;
	
	cout<<"請輸入數字(印出1~n之間的質數)";
	cin>>n;
	
	for(i=2;i<n;i++)
	{
		for(j=2;j<=i;j++)
		{ 
			if(i==j)
			{
			cout<<j<<",";	
			}
		
			if(i%j==0)
			{
				break;
			}
			
		} 
		
	}
	
	return 0;
}
