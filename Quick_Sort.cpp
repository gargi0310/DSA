#include <bits/stdc++.h>
using namespace std;
int partition(vector<int>&arr,int low,int high)
{
  int pivot=arr[high];
  int i=(low-1);
  for(int j=low;j<=high;j++)
  {
    if(arr[j]<pivot)
    {
      i++;
      swap(arr[i],arr[j]);
    }
  }
  swap(arr[i+1],arr[high]);
  return (i+1);
}
void quickSort(vector<int>&arr,int low,int high)
{
  if(low<high)
  {
    int pi=partition(arr,low,high);

    quickSort(arr,low,pi-1);
    quickSort(arr,pi+1,high);
  }
}
int main() {
  int n;
  cout<<"Enter the number of elements: ";
  cin>>n;
  vector<int> arr;
  for(int i=0; i<n; i++){
      int el;
      cin>>el;
      arr.push_back(el);
  }
  cout<<"Before Sorting\n";
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
  
  quickSort(arr,0,n-1);
  cout<<"Sorted Array\n";
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
  return 0;
}
