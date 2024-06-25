
#include<bits/stdc++.h> // better than iostream
using namespace std;

void printList(int *a, int n) // *a and a[] represent same things,
{
for(int i =0 ; i<n ; i++){

cout<<(a+i)<<" "<<*(a+i)<<" "<<a[i]<<endl; // *(a+i) is dereferencing operator

}
/*cout<<(a+0)<<" "<<*(a+0)<<" "<<a[0]<<endl;
cout<<(a+1)<<" "<<*(a+1)<<" "<<a[1]<<endl;
cout<<(a+2)<<" "<<*(a+2)<<" "<<a[2]<<endl;*/

}


void shiftLeft(int *a, int n){
    cout<<endl;
for(int i =0 ; i<n ; i++){

a[i] = a[i+1];

}


}



int main(){

int a[5] = {10, 20 , 30, 40, 50};
printList(a, 5);
shiftLeft(a, 5);
printList(a, 5);


return 0;
}

