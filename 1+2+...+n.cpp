#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int n;
	cout<<"輸入一正整數n，顯示結果=1+2+3+......+n"<<"\n";
	cin>>n;
	cout<<(1+n)*n/2;
	
	return 0;
}
