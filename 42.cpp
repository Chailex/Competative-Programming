#include <bits/stdc++.h>
using namespace std;

void swap(int* a, int* b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
int partition (int arr[], int low, int high)
{
	int pivot = arr[high]; 
	int i = (low - 1); 
	for (int j = low; j <= high - 1; j++)
	{
		if (arr[j] < pivot)
		{
			i++; 
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i + 1], &arr[high]);
	return (i + 1);
}
void quickSort(int arr[], int low, int high)
{
	if (low < high)
	{
		int pi = partition(arr, low, high);
		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);
	}
}

int main()
{
	int test;
	cin>>test;
	while(test--){
		int n;
		long long res;
		cin>>n>>res;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		quickSort(arr, 0, n - 1);

		int result=0, ct=0, flag=0;
		for(int i = n-1;i>=0;i--){
			result = (result ^ arr[i]);
			ct++;
			if(result >= res){
				cout<<ct<<endl;
				flag=1;
				break;
			}
		}
		if(flag==0){
			cout<<-1<<endl;
		}
    }
	return 0;
}
