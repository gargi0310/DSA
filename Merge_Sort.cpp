#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void merge(vector<int>&arr, int s, int mid, int e){
	vector<int> temp;
	int left = s;
	int right = mid+1;
	
	while(left<=mid && right <= e){
		if(arr[left]<=arr[right]){
			temp.push_back(arr[left]);
			left++;
		}
		else{
			temp.push_back(arr[right]);
			right++;
		}	
	}
	while(left<=mid){
			temp.push_back(arr[left]);
			left++;
		}
		while(right<=e){
			temp.push_back(arr[right]);
			right++;
	}
	for(int i=s; i<=e;i++){
	    arr[i]=temp[i-s];
	}
}
void mergeSort(vector<int> &arr, int s, int e){
	if(s>=e){
		return;
	}
	int mid = (s+e)/2;
	mergeSort(arr,s, mid);
	mergeSort(arr, mid+1, e);
	merge(arr, s, mid, e);
}
int main(){
	vector<int> arr;
	int n;
	cout<<"Enter the number of elements you want to insert into the array: ";
	cin>>n;
	for(int i=0; i<n; i++){
		int el;
		cin>>el;
		arr.push_back(el);
	}
	cout<<"Entered Array:"<<endl;
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	mergeSort(arr, 0, n-1);
	cout<<"\nPrinting sorted array:"<<endl;
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
