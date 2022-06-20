/*
Problem
This year Santa wants to make a Christmas tree. But this time he wants to decorate it with numbers as in the Pascal’s triangle. But Santa is very busy in packing the gifts. Now, you being Santa’s friend help in making the tree.

Input: In the first line, you will be given ”t” no. of test cases. For each test case, you will be given a whole number “N”.

Output: For each value N, Print the first N lines in Christmas tree.

Constraints:   1≤T≤100

                        1 ≤ N ≤ 40

 

Sample Input
2
3
5
Sample Output
1 
1 1 
1 2 1 
1 
1 1 
1 2 1 
1 3 3 1 
1 4 6 4 1 
Time Limit: 5
Memory Limit: 256
Source Limit:
Explanation
For each line find the binomial coeffients and print the values with required spaces between them.
*/ 

#include<iostream>
using namespace std;

const int N=42;

int main(){
	int test;
	cin>>test;
	long long int a[N][N];
		a[0][0]=1;
		for(int i=1;i<N;i++){
			a[i][0]=1;
			a[i][i]=1;
			for(int j=1;j<i;j++){
				a[i][j]=a[i-1][j]+a[i-1][j-1];
			}
		}
	while(test--){
		int n;
		cin>>n;
		for(int x=0;x<n;x++){
			for(int p=0;p<=x;p++){
				cout<<a[x][p]<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
}