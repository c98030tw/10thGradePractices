#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	int a,b ;
	b=2019 ;
	
	cout<<"請輸入四位密碼:\n" ;
	cin>>a;
	
	if (a==b){
		cout<<"正確。";
	}
	else{
		cout<<"錯誤。\n"<<"提示:OOOO台灣燈會在屏東\n\n" ;
	}
	
	cout<<"請重新輸入四位密碼:\n" ;
	cin>>a;
	
	if (a==b){
		cout<<"正確。";
	}
	else{
		cout<<"錯誤。\n"<<"提示:OOOO>2018\n\n" ;
	}
	
	cout<<"請重新輸入四位密碼:\n" ;
	cin>>a;
	
	if (a==b){
		cout<<"正確。";
	}
	else{
		cout<<"...是2019" ;
	}
	
	return 0;
}
