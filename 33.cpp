/*
You are given the sequence of Nucleotides of one strand of DNA through a string S of length N. S contains the character A,T,C, and G only.

Chef knows that:

A is complementary to T.
T is complementary to A.
C is complementary to G.
G is complementary to C.
Using the string S, determine the sequence of the complementary strand of the DNA.

Input Format
First line will contain T, number of test cases. Then the test cases follow.
First line of each test case contains an integer N - denoting the length of string S.
Second line contains N characters denoting the string S.
Output Format
For each test case, output the string containing N characters - sequence of nucleotides of the complementary strand.

Constraints
1≤T≤100
1≤N≤100
S contains A, T, C, and G only
Sample Input 1 
4
4
ATCG
4
GTCC
5
AAAAA
3
TAC
Sample Output 1 
TAGC
CAGG
TTTTT
ATG
Explanation
Test case 1: Based on the rules, the complements of A, T, C, and G are T, A, G, and C respectively. Thus, the complementary string of the given string ATCG is TAGC.

Test case 2: Based on the rules, the complements of G, T, and C are C, A, and G respectively. Thus, the complementary string of the given string GTCC is CAGG.

Test case 3: Based on the rules, the complement of A is T. Thus, the complementary string of the given string AAAAA is TTTTT.

Test case 4: Based on the rules, the complements of T, A, and C are A, T, and G respectively. Thus, the complementary string of the given string TAC is ATG.
*/ 

#include<iostream>
using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		int len;
		cin>>len;
		string s;
		cin>>s;
		for(int i=0;i<len;i++){
			if(s[i] == 'A'){
				s[i]='T';
			}else if(s[i] == 'T'){
				s[i]='A';
			}else if(s[i] == 'C'){
				s[i]='G';
			}else if(s[i] == 'G'){
				s[i]='C';
			}
		}
		cout<<s<<endl;
	}
	return 0;
}