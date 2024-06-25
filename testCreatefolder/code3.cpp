#include<bits/stdc++.h> // better than iostream
using namespace std;

void printList(int *a, int n)
{
for(int i =0 ; i<n ; i++){

cout<<*(a+i)<<" ";

}

}


void shiftLeft(int *a, int n){
    cout<<endl;
for(int i =0 ; i<n ; i++){

a[i-1] = a[i];

}

printList(a, n );

}



int main(){

int a[5] = {10, 20 , 30, 40, 50};
printList(a, 5);
shiftLeft(a, 5);
//printList(a, 5);


return 0;
}


