//write a program to read a number and print SUM of digits.
#include <iostream>
#include <cmath>
#include <string>
using namespace std ;
unsigned int ReadPositiveNumber (string message){
    int  n ;
    cout<<message<<"\n";
    do{
    cin>> n ;
    if(n<=0){
        cout<<"Please enter number > 0\n";
    }} while (n<=0) ;
    
    return n ;
} ;
unsigned int ReverseNumber (unsigned int n){
 unsigned int remainder =0 ;
 unsigned int newnumber =0 ;
while(n>0){
    remainder = n%10 ;
    n/=10 ;
    newnumber = newnumber *10 + remainder ;
}
return newnumber ;

} ;
int main (){
    cout<<ReverseNumber (ReadPositiveNumber ("Enter positive number:")) ;
    return 0 ;
}
