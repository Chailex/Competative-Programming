/*
There are 10 problems in a contest. You know that the score of each problem is either 1 or 100 points.

Chef came to know the total score of a participant and he is wondering how many problems were actually solved by that participant.

Given the total score P of the participant, determine the number of problems solved by the participant. Print −1 in case the score is invalid.

Input Format
First line will contain T, number of test cases. Then the test cases follow.
Each test case contains of a single line containing a single integer P - denoting the number of points scored by the participant.
Output Format
For each testcase, output the number of problems solved by the participant or −1 if the score is invalid.

Constraints
1≤T≤1000
0≤P≤1000
Sample Input 1 
5
103
0
6
142
1000
Sample Output 1 
4
0
6
-1
10
Explanation
Test Case 1: The participant has solved 4 problems out of which 3 problems are worth 1 point each while 1 problem is worth 100 points.

Test Case 2: Since participant's score is 0, he solved 0 problems.

Test Case 3: The participant has solved 6 problems out of which all the problems are worth 1 point.

Test Case 4: It is not possible to get a score of 142.

Test Case 5: The participant solved all the 10 problems and score of all the problems is 100.
*/ 

#include<iostream>
using namespace std;

int main(){
	long long int test;
	cin>>test;
	while(test--){
		long long int n,arr[4],rep[4],i=0;
		cin>>n;
		long long re=n;
		while(re>0){
			arr[i]=re%10;
			i= i+1;
			re/=10;
		}
		i=i-1;
		int k=i;
		for(int j=0;j<=i;j++){
			rep[j]=arr[k];
			k--;
		}

		if(n==0){
			cout<<0<<endl;
		}
		else if(n==1000 || n==10){
			cout<<10<<endl;
		}else if(i == 2 && rep[1]==0){
			if(rep[0]+rep[2] <=10){
				cout<<rep[0]+rep[2]<<endl;
			}else{
				cout<<-1<<endl;
			}
		}else if(i==1){
			cout<<-1<<endl;
		}else if(i==0){
			cout<<rep[0]<<endl;
		}else{
			cout<<-1<<endl;
		}
	}
	return 0;
}