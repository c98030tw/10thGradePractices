#include <iostream>
#include <cstdlib>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	srand((unsigned)time (NULL));
	
	int a,b,i,maxi,mini;
	maxi=100;
	mini=1;
	b=rand()%100+1; 
	
	for(int i=1;i<=10;i++)
	{
	
		cout<<"請輸入1至100之數字:(還可猜"<<11-i<<"次)";
		cin>>a;
	
		if(a>b)
		{
			maxi=a;
			cout<<"範圍在"<<mini<<"~"<<maxi<<"之間\n";
		}
		else if(a<b)
		{	
			mini=a;
			cout<<"範圍在"<<mini<<"~"<<maxi<<"之間\n";
		}
		else
		{
			cout<<"正確\n";
			break;
		}
		
		
	}
	
	if(i==11)
		{
		cout<<"答案是"<<b; 
		}
		
	return 0;
}
