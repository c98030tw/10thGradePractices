#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) 
{
	
	int i,j;
	
	for(int i=1;i<13;i++)
	{
		for(int j=1;j<13;j++)
		{
			if(i<10)
			{
				cout<<" "<<i<<"*";
			}
			else
			{
				cout<<i<<"*";
			}
//-------------------------------------------			
			if(j<10)
			{
				cout<<" "<<j<<"=";
			}
			else
			{
				cout<<j<<"=";
			}		
//-------------------------------------------			
			if(i*j<10)
			{
				cout<<"  "<<i*j<<" ";
			}
			else if(i*j<100)
			{
				cout<<" "<<i*j<<" ";
			}
			else
			{
				cout<<i*j<<" ";
			}
			
		}cout<<"\n";
	}
	

	return 0;
}
