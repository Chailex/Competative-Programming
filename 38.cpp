/*
Chef is deriving weird ways to sort his array. Currently he is trying to sort his arrays in increasing order by reversing some of his subarrays.

To make it more challenging for himself, Chef decides that he can reverse only those subarrays that have sum of its elements at most X. Soon he notices that it might not be always possible to sort the array with this condition.

Can you help the Chef by telling him if the given array can be sorted by reversing subarrays with sum at most X.

More formally, for a given array A and an integer X, check whether the array can be sorted in increasing order by reversing some (possibly none) of the subarrays such that the sum of all elements of the subarray is at most X.

Input Format
First line will contain T, number of test cases. Then the test cases follow.
The first line of each test case contains of two space-separated integers N and X denoting the length of the array and the maximum sum of subarrays that you can reverse.
The second line contains N space-separated integers A1,A2,...,AN representing the initial array.
Output Format
For each test case, output YES if Chef can sort the array using a finite number of operations, else output NO.

You may print each character of the string in uppercase or lowercase (for example, the strings YeS, yEs, yes and YES will all be treated as identical).

Constraints
1≤T≤5⋅104
1≤N≤105
1≤Ai≤2⋅109
1≤X≤2⋅109
Sum of N over all test cases does not exceeds 3⋅105.
Sample Input 1 
3
4 1
1 2 3 4
4 1
2 1 3 4
5 7
3 2 2 3 3
Sample Output 1 
YES
NO
YES
Explanation
Test case 1: The array is already sorted so we need not make any operations.

Test case 2: There is no subarray with sum less than or equal to 1 so we cannot sort the array.

Test case 3: We can reverse the subarray A[1,3] which has a sum of 3+2+2=7. Thus, the reversed subarray is [2,2,3]. The resulting array is [2,2,3,3,3]. The array is sorted in 1 operation.
*/ 

#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int test;
	cin>>test;
	while(test--){
		long long int n, sum;
		cin>>n>>sum;
		long long int arr[n],temp[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>arr[i];
		}
		long long int highest=arr[0], j=1, lowest=0,flag=0;
		
		long long int su=0;
		for (int i = 1; i < n; ++i)
		{
			temp[0]=highest;
			if(arr[i]<=highest){
				int tt=highest;
				su=temp[0];
					long long int k=i;
					while(arr[k]<=highest){
						temp[j]=arr[k];
						su+=arr[k];
						j++;
						highest=arr[k];
						k++;
					}
				if(!((su<=sum) && highest>lowest && tt<=arr[k])){
					flag=1;
				}
			}else{
				highest=arr[i];
				lowest=arr[i-1];
				temp[0]=highest;
			}
		}
		if(flag==0){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}