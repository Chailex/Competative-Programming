// LCM of two number
#include<iostream>
using namespace std;

int main(){
	int num1, num2;
	cin>>num1>>num2;
	for(int i=2;i<=(num1*num2);i++){
		if((i%num1==0) && (i%num2==0)){
			cout<<i;
			break;
		}
	}
	return 0;
}