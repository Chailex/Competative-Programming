/*
You are given an array A consisting of 2⋅N integers.

You can perform the following operation any number of times.

Choose any i (1≤i≤2⋅N) such that Ai is even and divide Ai by 2.
Or choose any i (1≤i≤2⋅N) and multiply Ai by 2.
Find the minimum number of operations required to make the number of even elements and number of odd elements in the array equal.

Input Format
The first line contains a single integer T — the number of test cases. Then the test cases follow.
The first line of each test case contains an integer N — the size of the array A is 2⋅N.
The second line of each test case contains 2⋅N space-separated integers A1,A2,…,A2⋅N denoting the array A.
Output Format
For each test case, output on a new line the minimum number of operations required to make the number of even elements and number of odd elements in the array equal.

Constraints
1≤T≤105
1≤N≤105
1≤Ai≤109
The sum of N over all test cases is at most 105.
Sample Input 1 
3
3
1 2 3 4 5 6
3
1 3 4 8 2 6
3
1 5 3 5 6 7
Sample Output 1 
0
1
2
Explanation
Test case 1: No operations are required since there are already an equal number of odd elements and even elements.

Test case 2: One operation is enough. It can be seen that the number of odd and even elements in the resulting array are equal.

[1,3,4,8,2–,6]−→−÷2i=5[1,3,4,8,1,6]
Test case 3: Here two operations are enough to make the number of odd and even elements in the resulting array equal.

1st operation: [1,5,3,5–,6,7]−→−×2i=4[1,5,3,10,6,7]
2nd operation: [1,5,3,10,6,7–]−→−×2i=6[1,5,3,10,6,14]
*/ 

// Wrong answer
#include <bits/stdc++.h>
using namespace std;

int main(){
	long long int test;
	cin>>test;
	while(test--){
		long long int n, odd=0,even=0;
		cin>>n;
		long long int arr[2*n];
		for (long long int i = 1; i <= 2*n; ++i)
		{
			cin>>arr[i];
			if(arr[i]%2==0){
				even++;
			}else{
				odd++;
			}
		}
		long long int high=0;
		if(even==odd){
			cout<<0<<endl;
		}else{
			long long int ct=0;
			if(even>odd){
				high=even;
			}
			else{
				high=odd;
			}
			for (long long int i = 0; i <= high+1; ++i)
			{
				if(even>odd){
					--even;
					++odd;
					++ct;
				}else{
					--odd;
					++even;
					++ct;
				}
				if(even==odd){
					cout<<ct<<endl;
					break;
				}
			}
		} 
		
	}
	return 0;
}