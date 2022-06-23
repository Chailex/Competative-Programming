/*
Problem
Read problems statements in Mandarin Chinese and Russian.
You are given an array A of integers of size N. You will be given Q queries where each query is represented by two integers L, R. You have to find the gcd(Greatest Common Divisor) of the array after excluding the part from range L to R inclusive (1 Based indexing). You are guaranteed that after excluding the part of the array remaining array is non empty.

Input
First line of input contains an integer T denoting number of test cases.
For each test case, first line will contain two space separated integers N, Q.
Next line contains N space separated integers denoting array A.
For next Q lines, each line will contain a query denoted by two space separated integers L, R.
Output
For each query, print a single integer representing the answer of that query.
Constraints
Subtask #1: 40 points

2 ≤ T, N ≤ 100, 1 ≤ Q ≤ N, 1 ≤ A[i] ≤ 105
1 ≤ L, R ≤ N and L ≤ R
Subtask #2: 60 points

2 ≤ T, N ≤ 105, 1 ≤ Q ≤ N, 1 ≤ A[i] ≤ 105
1 ≤ L, R ≤ N and L ≤ R
Sum of N over all the test cases will be less than or equal to 106.
Warning : Large IO(input output), please use faster method for IO.

Sample 1:
Input
1
3 3
2 6 9
1 1
2 2
2 3
output -
3
1
2
Explanation:
Test case 11: The given array is [2, 6, 9][2,6,9].

Query 11: On excluding the range [1,1][1,1], the remaining elements are [6, 9][6,9]. The gcd of 66 and 99 is 33.
Query 22: On excluding the range [2,2][2,2], the remaining elements are [2, 9][2,9]. The gcd of 22 and 99 is 11.
Query 33: On excluding the range [2,3][2,3], the remaining elements are [2][2]. The gcd of 22 is 22.
*/ 

#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,q;
		cin>>n>>q;
		int a[n+10];
		int forward[n+10];
		int backward[n+10];
		forward[0]=backward[n+1]=0;
		for (int i = 1; i <= n; ++i)
		{
			cin>>a[i];
		}
		for (int i = 1; i <= n; ++i)
		{
			forward[i]= __gcd(forward[i-1], a[i]);
		}
		for (int i = n; i >= 1; --i)
		{
			backward[i]=__gcd(backward[i+1],a[i]);
		}
		while(q--){
			int l,r;
			cin>>l>>r;
			cout<<__gcd(forward[l-1],backward[r+1])<<endl;
		}
	}
	return 0;
}