/*
A special unit is formed within the police force of N policeman such that no
two policeman have equal ranking. The rank of a policeman is depicted by the 
number of stars in his badge. There a total of N policemen each having a badge 
containing some stars.
Your task is to calculate minimum number of extra stars that needs to be bought in
order to meet the above constraint.
input1: N, denoting number of policemen
input2: An array of N elements [A1,A2,...An], where Ai denotes the number of 
stars on the badge Ai.
*/ 
#include<iostream>
using namespace std;

int main(){
	int input1,j=0,result=0;
	cin>>input1;
	int input2[input1];
	for(int i=0; i<input1;i++){
		cin>>input2[i];
		j=i+1;
		result += j-input2[i];
	}
	cout<<result;

	return 0;
}