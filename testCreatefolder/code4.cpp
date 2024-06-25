#include<bits/stdc++.h>
using namespace std;

void printList(int *a, int n)
{
for(int i =0 ; i<n ; i++){

cout<<*(a+i)<<" ";

}

}


void shiftLeft(int *a, int n, int k){

 for(int j=0; j<k; j++){

for(int i =0 ; i<n ; i++){

a[i-1] = a[i];

}
 }

 for(int i = n ; i>k ; i--){
    a[i]=0;
 }

 cout<<endl;
printList(a, n );

}



int main(){

int a[5] = {10, 20 , 30, 40, 50};
printList(a, 5);
shiftLeft(a, 5,2);



return 0;
}



