/*
Problem
Chef is fond of burgers and decided to make as many burgers as possible.

Chef has AA patties and BB buns. To make 11 burger, Chef needs 11 patty and 11 bun.
Find the maximum number of burgers that Chef can make.

Input Format
The first line of input will contain an integer TT — the number of test cases. The description of TT test cases follows.
The first and only line of each test case contains two space-separated integers AA and BB, the number of patties and buns respectively.
Output Format
For each test case, output the maximum number of burgers that Chef can make.

Constraints
1 \leq T \leq 10001≤T≤1000
1 \leq A, B \leq 10^51≤A,B≤10 
5
 
Sample 1:
Input
Output
4
2 2
2 3
3 2
23 17
2
2
2
17
*/ 
#include <iostream>
using namespace std;

int main() {
	int test;
	cin>>test;
	while(test--){
	    long long int a,b;
	    cin>>a>>b;
	    if(a>b){
	        cout<<b<<endl;
	    }else if(a<b){
	        cout<<a<<endl;
	    }else{
	        cout<<b<<endl;
	    }
	}
	return 0;
}