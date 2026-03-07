//write a program to read a number and print it in a reversed order.
#include <iostream>
using namespace std ;
unsigned int ReadPositiveNumber (string massege){
    int  n ;
    cout<<massege<<"\n";
    do{
    cin>> n ;
    if(n<=0){
        cout<<"Please enter number > 0\n";
    }} while (n<=0) ;
    
    return n ;
} ;
void ReversedPrintNumber (unsigned int n){
    int remainder = 0 ;
    while(n>0){
        remainder=n%10 ;
        n/=10 ;
        cout<<remainder<<"\n" ;
    } ;
}
int main(){
    ReversedPrintNumber (ReadPositiveNumber ("Enter Positive Number :")) ;

    return 0 ;
}