#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	
	int apple,kiwi,total;
	
	cout<<"請輸入要購買幾顆蘋果:"; 
	cin>>apple;
	
	cout<<"請輸入要購買幾顆奇異果:";
	cin>>kiwi;
	
	total=apple*25+kiwi*20;
	
	cout<<"一共要付"<<total<<"元。";
	
	
		return 0;
}
