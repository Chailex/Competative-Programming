/*
Chef has an array A of length N.

An index i is called strong if we can change the gcd of the whole array just by changing the value of Ai.

Determine the number of strong indices in the array.

Input Format
First line will contain T, number of test cases. Then the test cases follow.
First line of each test case contains an integer N denoting the size of the array A.
Second line contains N space separated integers A1,A2,…,AN - denoting the array A.
Output Format
For each test case, output the number of strong indices in the array.

Constraints
1≤T≤5⋅104
2≤N≤3⋅105
1≤Ai≤109
Sum of N over all test cases do not exceed 3⋅105.
Sample Input 1 
3
3
5 10 20
4
3 5 7 11
4
2 2 2 2
Sample Output 1 
3
0
4
Explanation
Test Case 1: All the indices are strong.

For index 1 you can change the element to 10 which changes the gcd of the array to 10.
For index 2 you can change the element to 12 which changes the gcd of the array to 1.
For index 3 you can change the element to 12 which changes the gcd of the array to 1.
Test Case 2: No index is strong. If you change any single element, gcd still remains the same.

Test Case 3: All the indices are strong. You can change any element to 3. This changes the gcd of the array to 1.
*/ 

	#include<bits/stdc++.h>
	using namespace std;
	long long int N=1e9;
	int main(){
		// long long int pre[N];
		// pre[0]=0;
		// pre[1]=0;
		// pre[2]=1;
		// for (int i = 3; i <= N; ++i)
		// {
		// 	for (int k = 2; k <= (i+1)/2; ++k)
		// 	{
		// 		if(i%k==0){
		// 			pre[i]=0;
		// 			break;
		// 		}else{
		// 			pre[i]=1;
		// 		}
		// 	}
		// }
		long long int test;
		cin>>test;
		while(test--){
			long long int n;
			cin>>n;
			long long int arr[n],ct=0,prime=0;
			for(long long int i=0;i<n;i++){
				cin>>arr[i];
				if(arr[i]==1){
					ct++;
				}
				// else if(pre[arr[i]]==1){
				// 	prime++;
				// }
			}
			if(ct==1){
				cout<<0<<endl;
			}else{
				long long int gcd=arr[0],ct=1,gcd1;
				for(long long int i=1;i<n;i++){
					gcd = __gcd(gcd,arr[i]);
				}
				for(long long int i=1;i<n;i++){
					gcd1 = __gcd(gcd,arr[i]+1);
					if(gcd1 != gcd){
						ct++;
					}
				}
				if(ct>1){
					cout<<ct<<endl;
				}
				else{
					cout<<0<<endl;
				}
			}
			
		}
		return 0;
	}