/*
Problem
Monk loves Primes, whether it is number or word

Rules to convert a string to a number:
1. Convert the UpperCase letters to LowerCase letters
2. Convert the LowerCase letters to UpperCase letters

Add the ASCII values of all the UpperCase letters and subract the ASCII values of all the LowerCase letters. The resultant number is X.

Note: If X is negative take absolute value of it

Print 1 if X is a prime number and 0 if not
(Prime Number: A number which is divisble by the number one and itself, i.e, it has 2 divisors)

 

Input Format:

A single line which consists of a string

 

Output Format:

0 or 1 in a single line 

 

Constraints:

1 <= string length <= 2000

Sample Input
lBaXps
Sample Output
0
Time Limit: 2
Memory Limit: 256
Source Limit:
Explanation
Explanation:

l -> L => 76
B -> b => 98
X -> x => 120
p -> P => 80
s -> S => 83

76 - 98 - 120 + 80 + 83 = 21 and it is not a prime number
*/ 

#include<iostream>
using namespace std;

int main(){
	string s;
	cin>>s;
	long long int sum=0;
	for(int i=0;i<s.size();i++){
		if(s[i]>96){
			sum += s[i]-32;
		}else{
			sum -= s[i]+32;
		}
	}
	if(sum<0){
		sum*= -1;
	}
	int flag=1;
	for(int i=2;i<=sum/2;i++){
		if(sum%i != 0){
			flag=1;
		}else{
			flag=0;
			break;
		}
	}
	cout<<flag;
	return 0;
}