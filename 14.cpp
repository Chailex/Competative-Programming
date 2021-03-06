/*
Problem
Time is precious. So lets get to the crux of the problem straightaway!

Given 3 positive numbers A, B and C. We make a set which contains numbers that are either multiples of A or B or (A and B) in increasing order. We take the C-th number of set and print from C-th number to 0 with a step value of A or B whichever it is multiple of and if its a multiple of both, then use step value as LCM(A, B)
 

Hint: It's recommended you implement this using continue and goto statements. ;)


Constraints:

2 <= A,B <= 1000 (A and B will not be equal)

1 <= C <= 1000

Input format:

One line containing numbers - A, B, and C

Output format:

One line containing values from C-th number to 0 with the corresponding step value.

Sample Input
3 5 14
Sample Output
30 15 0
Time Limit: 1
Memory Limit: 256
Source Limit:
Explanation
Here, A is 3 and B is 5. so the set shall be - 3, 5, 6, 9, 10, 12, 15, 18, 20, 21, 24, 25 ,27, 30, 33, 35, ...

Given, C is 14. 14th number of the set is 30. this is a multiple of 3 and 5, ie., 15. So the output shall be 30 to 0 with a step value of 15. 

Output: 30 15 0

Note: u can try compiling and testing for other valid test cases so as to understand the problem. the "expected correct answer" will show up.
*/ 
#include<iostream>
using namespace std;

int lcm(int num1, int num2){
	int temp,hcf,lcm;
	if (num1>=num2){
	    temp=num1;
	    num1=num2;
	    num2=temp;
	  }
	  for (int i=1 ; i<=num1 ; i++){
	    if (num1%i==0 && num2%i==0){
	      hcf=i;
	    }
	  }
	  // MATHEMATICAL FORMULA : HCF * LCM = NUM1 * NUM2
	  lcm = (num1*num2)/hcf;
	return lcm;
}

int main(){
	int num1, num2, step,num;
	cin>>num1>>num2>>step;
	int i=2, arr[step],j=0;
	while(true){
		if((i%num1==0) && (i%num2==0)){
			arr[j]=i;
			i++;
			j++;
			num = lcm(num1, num2);
		}else if(i%num1==0){
			arr[j]=i;
			i++;
			j++;
			num=num1;
		}else if(i%num2==0){
			arr[j]=i;
			i++;
			j++;
			num=num2;
		}
		else{
			i++;
			continue;
		}

		if(j==step){
			break;
		}
	}
	for(int x=j-1;x>=0;x--){
		if(arr[x]%num==0){
			cout<<arr[x]<<" ";
		}
	}
	cout<<0;
	return 0;
}