#include<bits/stdc++.h>
using namespace std;

int combinationUtil(int arr[], int data[],
                    int start, int end,
                    int index, int r,int res);

int printCombination(int arr[], int n, int r, int res)
{
    int data[r];
    cout<<data[r]<<endl;
    return combinationUtil(arr, data, 0, n-1, 0, r, res);
}

int combinationUtil(int arr[], int data[],
                    int start, int end,
                    int index, int r, int res)
{
    if (index == r)
    {
    	int result=data[0];
        for (int j = 0; j < r-1; j++){
        	result = result ^ data[j+1];
        }
        if(result>=res){
        	// cout<<r<<endl;
        	return r;
        }
        return -1;
    }

    for (int i = start; i <= end &&
        end - i + 1 >= r - index; i++)
    {
        data[index] = arr[i];
        combinationUtil(arr, data, i+1,
                        end, index+1, r, res);
    }
}

int main(){
	int test;
	cin>>test;
	while(test--){
		int n, res;
		cin>>n>>res;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		int ct=-1;
		for(int i=1;i<=n;i++){
			ct = printCombination(arr, n, i, res);
			if(ct>-1){
				// cout<<ct<<endl;
				break;
			}
		}
		
	}
	return 0;
}