#include<iostream>
using namespace std;

void heapify(int arr[] , int n , int i ){
    int largest = i ;
    int left = 2*i +1;
    int right = 2*i+2;

    if(left <n && arr[left]>arr[largest]){
          largest = left;
    }
      

    if(right <n && arr[right]>arr[largest]){
            largest = right;
    }
        
      

    if (largest != i)
    {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
    
}

void maxHeap(int arr[], int n){
    for(int i=n/2-1 ; i>=0; i--)
    {
     heapify(arr,n,i);
    }
}

void heapSort(int arr[], int n){
  maxHeap(arr,n);

    for(int i=n-1 ; i>0; i--)
    {
     swap(arr[0], arr[i]);
     heapify(arr, i, 0);
    }
}


void printArr(int arr[], int size){
    for(int i=0 ; i<size; i++)
    {
     cout<<arr[i]<<" ";
    }
    cout<<endl;
 }

int main(){
  
int arr[] = {20, 40,10, 8 ,45};
int n = 5;

cout<<"Array is ";
printArr(arr , n);

cout<<"After sorting ";
heapSort(arr,n);
printArr(arr , n);

return 0;
}