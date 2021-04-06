#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	int n;
	cin>>n;
	for(int i=1;i<n+1;i++){
		cout<<"第"<<i<<"年 存款為"<<10000*1.01<<"\n";
	}
	
	return 0;
}
