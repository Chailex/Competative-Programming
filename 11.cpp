/*
Return the reversed string that is, the last word in input string should come
at the first position of the output string, second last word at the second position and so on.
Individual words should remain as it is. 
INput 1 : Welcome to metaverse
Output 1 : metaverse to Welcome
*/ 
#include<iostream>
using namespace std;

int main(){
	string s;
	getline(cin,s);
	string arr[10];
	int j=0;
	string l="";
	for(int i=0;i<s.size();i++){
		if(s[i] == ' '){
			arr[j] = l;
			j++;
			l="";
		}else{
			l.push_back(s[i]);
		}
	}
	arr[j]=l;
	for(int k=j;k>=0;k--){
		cout<<arr[k]<<" ";
	}
	return 0;
}