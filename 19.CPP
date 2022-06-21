/*
Please stick to the given input and output format. Do not print anything else which is not required!

Lala is a newbie in the programming world. He just learned how to generate fibonacci series which he told this to his elder brother. To test his ability to think out of the box, the elder brother gave Lala an interesting problem.
The problem is simple. The elder brother will give Lala an integer N and the task is to check whether the given number ever comes in fibonacci sequence or not.

Now terms in a fibonacci series can be defined by,

F_{0} = 0
F_{1} = 1
F_{n} = F_{n-1} + F_{n-2}

Thus, using the above formula, fibonacci sequence can be obtained as shown below:
0 1 1 2 3 5 8 …so on
Input
The first line contains an integer, T, denoting the number of test cases.
Next T lines contains an integer N.
 

Output
For each test case , print “Yes” if the number exists in fibonacci sequence, else print “No”.
 

Constraints
Subtask 1: 70 points
1 ≤ T ≤ 100
1 ≤ N ≤ 1000

Subtask 2: 30 points
1 ≤ T ≤ 100000
1 ≤ N ≤ 1000000000
 

Example
Input:
1
8
Output:
Yes

Input:
1
9
Output:
No

Input:
1
21
Ouput:
Yes
*/ 

#include <iostream>
using namespace std;

int fib(int a,int b, int c){
	if(c==a){
		return 1;
	}else if(c>a){
		return 0;
	}
	int sum;
	sum=b+c;
	b=c;
	c=sum;
	return fib(a,b,c);
	
}

int main() {
	int test;
	cin>>test;
	while(test--){
		long long int a;
		cin>>a;
		int b=0,c=1,flag=0,sum=0;
		if(a==0 || a==1){
			flag=1;
		}
		else{
			flag = fib(a,b,c);
		}
		if(flag==1){
			cout<<"TRUE"<<endl;
		}else{
			cout<<"FALSE"<<endl;
		}
		
	}

	return 0;
}