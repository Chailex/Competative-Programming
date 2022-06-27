#include<bits/stdc++.h>
using namespace std;

void combi1(long long int arr[], int data[],
					int start, int end,
					int index, int r, long long int res, int &ct);


void combi(long long int arr[], int n, int r, long long int res, int &ct)
{
	int data[r];

	combi1(arr, data, 0, n-1, 0, r, res, ct);
}

void combi1(long long int arr[], int data[],
					int start, int end,
					int index, int r, long long int res, int &ct)
{
	if (index == r)
	{
		int result=0;
		for (int j = 0; j < r; j++){
			result = (data[j] ^ result);
		}
		if(result >= res){
			ct=r;
		}
		return ;
	}
	for (int i = start; i <= end &&
		end - i + 1 >= r - index; i++)
	{
		data[index] = arr[i];
		combi1(arr, data, i+1,
						end, index+1, r, res, ct);
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
		long long int arr[n];
		int ct=-1;
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		for(int i=1;i<=n;i++){
			combi(arr, n, i, res, ct);
			if(ct>-1){
				cout<<ct<<endl;
				break;
			}
		}
		if(ct==-1){
			cout<<ct<<endl;
		}
	}
	// int arr[] = {1, 2, 3, 4, 5}, ct=-1;
	// int r = 1;
	// int n = sizeof(arr)/sizeof(arr[0]);
	// printCombination(arr, n, r, res, ct);
	// cout<<ct;
}

