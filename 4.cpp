/*
Your program is to use the brute-force approach in order to find the Answer to Life, the Universe, and Everything. More precisely... rewrite small numbers from input to output. Stop processing input after reading in the number 42. All numbers at input are integers of one or two digits.


Example
Input:
1
2
88
42
99

Output:
1
2
88
*/

#include<iostream>
using namespace std;

int main(){
	int a;
	while(true){
		cin>>a;
		if(a!=42){
			cout<<a<<endl;
		}
		else {
			break;
		}
	}
	return 0;
}