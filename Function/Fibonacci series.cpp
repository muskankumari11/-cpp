#include <iostream>
using namespace std;
int fib(int n){
if(n<2){
return 1;
}
return fib(n-2)+fib(n-1);
}
int main(){
int a;
cin>>a;
cout<<"the term of fibonacci sequence at position"<<a<<"is"<<fib(a)<<endl;
return 0;
}
