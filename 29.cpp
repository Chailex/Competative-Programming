// Spreadsheet problem---not solved yet
#include<iostream>
using namespace std;
const int alphabets = ['A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'];

int main(){
	int test;
	cin>>test;
	while(test--){
		string cor;
		cin>>cor;
		int flag=0;
		if(cor[0]=='R' && (cor[1]>48 && cor[1]<58)){
			for(int i=2;i<cor.size();i++){
				if(cor[i]=='C'){
					flag = 1;
				}
			}
		}
		if(flag == 1){

		}
		
	}
	return 0;
}