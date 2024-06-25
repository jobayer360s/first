#include<bits/stdc++.h>
using namespace std;

void printList(int *a, int n)
{
for(int i =0 ; i<n ; i++){

cout<<*(a+i)<<" ";

}

}


/*void RotateLeft(int *a, int n, int k){

int t = a[0];
for(int i = 0 ; i<n-1 ; i++){

    a[i-1] = a[i];
}
a[n-1] = t;

 cout<<endl;
printList(a, n );

}*/

void RotateLeft(int *a, int n, int k){

for(int j =0 ; j<k ; j++){
    int t = a[0];
for(int i = 0 ; i<n-1 ; i++){

    a[i-1] = a[i];
}

a[n-1] = t;
}

 cout<<endl;
printList(a, n );

}


int main(){

int a[5] = {10, 20 , 30, 40, 50};
printList(a, 5);
RotateLeft(a, 5,2);



return 0;
}



