#include<iostream>
using namespace std;

void swap(int *a , int *b )
{
 
 int *temp;
 temp = a;
 a = b;
 b = temp;
 

}
void sum(int x , int y){
 cout<<"summation is "<<x+y<<endl;
}

int main(){

sum(45,40);
int a = 10 , b = 20;

cout<<a<<" "<< b<<endl;
swap(a,b);
cout<<a<<" "<< b<<endl;

return 0;
}