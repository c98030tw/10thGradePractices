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
	
		cout<<"�п�J1��100���Ʀr:(�٥i�q"<<11-i<<"��)";
		cin>>a;
	
		if(a>b)
		{
			maxi=a;
			cout<<"�d��b"<<mini<<"~"<<maxi<<"����\n";
		}
		else if(a<b)
		{	
			mini=a;
			cout<<"�d��b"<<mini<<"~"<<maxi<<"����\n";
		}
		else
		{
			cout<<"���T\n";
			break;
		}
		
		
	}
	
	if(i==11)
		{
		cout<<"���׬O"<<b; 
		}
		
	return 0;
}
