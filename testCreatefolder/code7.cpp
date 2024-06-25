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

int main(){
int a[5] = {10, 20 , 30, 40, 50};
printList(a, 5);
int *k = makedouble(a, 5);
printList(k, 5);


return 0;
}






