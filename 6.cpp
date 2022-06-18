/*
Reverse The Number Problem Code: FLOW007
Add problem to Todo list
Submit
Given an Integer N, write a program to reverse it.

Input
The first line contains an integer T, total number of testcases. Then follow T lines, each line contains an integer N.

Output
For each test case, display the reverse of the given number N, in a new line.

Constraints
1 ≤ T ≤ 1000
1 ≤ N ≤ 1000000
Sample Input 1 
4
12345
31203
2123
2300
Sample Output 1 
54321
30213
3212
32
*/

#include<iostream>
using namespace std;

int main()
{
	int test;
	cin>>test;
	while(test--){
		int num,sum=0;
		cin>>num;
		while(num){
			sum=sum*10+num%10;
			num/=10;
		}
		cout<<sum<<endl;
	}
	return 0;
}