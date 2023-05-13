#include <iostream>
using namespace std;
//call by reference by using pointer
void swapPointer(int* a,int* b){
int temp=*a;
*a=*b;
*b=temp;
}
int main(){
int x=4;
int y=5;
//
cout<<"enter value of x"<<x<<endl<<"enter the value of y"<<y<<endl;
//this will not swap the value of a,b
swapPointer(&x,&y);
cout<<"the value of x is"<<x<<endl<<"the value of y is"<<y<<endl;
		return 0;
}
