#include <iostream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#include<cstdlib>
#include<time.h>

using namespace std;

int main(int argc, char** argv) {
	
	srand((unsigned)time(NULL));
	int n,i,a;
	
	cout<<"請輸入要猜拳的回合數:"; 
	cin>>n;
	
	for(i=1;i=n;i++){
		cout<<"請輸入要出的手勢:(1=剪刀，2=石頭，3=布)";
		cin>>a;
	}	
	
	
	
	
	
	return 0;
}
