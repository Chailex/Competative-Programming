/*
Problem
It's Binod's Birthday and all his friends want to have a great GPL for him. But Binod being so schemy, he locked his room with a secret number and given his friends a Binary string of secret number.

His friends have no knowledge about binary strings. Would you help his friends to convert given Binary String to Decimal and participate in Binod's GPL.

Binary String is a string with only '0' and '1'  as it's characters.

Examples : "000101", "10101", "1", "0", "01" are Binary Strings.

    "Ab3024", "123", "1A", "6", "AA" are not Binary Strings

Input Format

First Line : Integer  that denotes number of test cases .
For each Test Case : Integer  for size of Binary String  and Binary String  .
Output Format

For each Test case, print Single Line integer containing the secret number.
Note: Secret number will always be greater than or equal to 0.

 Sample Input
3
4
0001
2
10
4
1010
Sample Output
1
2
10

*/
#include<bits/stdc++.h>
using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		long long int l, n,k=1;
		long long int sum = 0;
		cin>>l>>n;
		for(int i=0;i<l;i++){
			sum = sum + (n%10)*k;
			n=n/10;
			k=k*2;
		}
		cout<<sum<<endl;
	}
	return 0;
}