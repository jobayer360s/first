#include<bits/stdc++.h>
using namespace std;

void printList(int *a, int n)
{
for(int i =0 ; i<n ; i++){

cout<<a[i]<<" ";

}
cout<<endl;
}


int * makedouble(int *p, int n){

for(int i = 0; i<n; i++)
     p[i] = p[i]*2;

     return p;
}


int * joint(int *x , int *y , int n){
int *c = new int [2*n];
for (int i =0; i<n; i++) c[i] = x[i];
for (int i =0, j =n; i<n, j<2*n; i++, j++) c[j] = y[i];

return c;S
}



int main(){
int a[5] = {10, 20 , 30, 40, 50};
printList(a, 5);
int *b = makedouble(a, 5);
printList(b, 5);
int *j = joint(a,b,5);
printList(j,10);


return 0;
}






