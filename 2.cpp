/*
Input Format

You will be given two positive integers,  and  (), separated by a newline.

Output Format

For each integer  in the inclusive interval :

If , then print the English representation of it in lowercase. That is "one" for , "two" for , and so on.
Else if  and it is an even number, then print "even".
Else if  and it is an odd number, then print "odd".
Note: 

Sample Input

8
11
Sample Output

eight
nine
even
odd
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a, b;
	cin>>a>>b;
	string numbers[9] = {"one","two","three","four","five","six","seven","eight","nine"};
	for(int i=a;i<=b;i++){
		if(i<=9){
			if(b<9){
				for(int j=i;j<=b;j++){
					cout<<numbers[j-1]<<endl;
				}
				break;
			}else{
				for(int j=i;j<=9;j++){
						cout<<numbers[j-1]<<endl;
					}
				i=9;
			}
				
		}else{
			if(i%2==0){
				cout<<"even"<<endl;
			}else{
				cout<<"odd"<<endl;
			}
		}
	}
	

	return 0;
}