#include<iostream>
using namespace std;

void bubleSort(int arr[], int size){
    for(int i=0 ; i<size-1; i++)
    {
     for(int j=0 ; j<size-1; j++)
       {
        if (arr[j]>arr[j+1])
        {
           swap(arr[j], arr[j+1]);
        }
        
           }
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
    
 int n= 5;
 int arr[n] = {19,14 ,12, 56,60};
cout<<endl;

printArr(arr , n);
bubleSort(arr, n);
printArr(arr , n);

return 0;
}

