#include<iostream>
using namespace std;

int main(){
	int size, first,last,middle;
	cin>>size;
	int array[size];
	for (int i = 0; i < size; i++)
	{
		cin>>array[i];
	}
	int search;
	cin>>search;
	first=0;
	last=size-1;
	middle = (first + last)/2;
	while(first<=last){
		if(array[middle] < search)
			first=middle+1;	
		else if(array[middle] == search){
			cout<<"Found element at position: "<<middle+1;
			break;
		}
		else
			last=middle-1;
		
		middle=(first + last)/2;
	}

	if(first>last){
		cout<<"No match found";
	}
	return 0;
}