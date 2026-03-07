//write a program to read a number and print SUM of digits.
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
unsigned int SumDigits (unsigned int n){
    unsigned int remainder = 0 ;
    unsigned int sum = 0 ;

    while(n>0){
        remainder=n%10 ;
        n/=10 ;
        sum+=remainder ;
    } ;
    return sum ;
}
void PrintSumDigits (unsigned int n){
    cout<<"Sum of digits = "<<SumDigits(n)<<"\n";
}
int main(){
    PrintSumDigits (ReadPositiveNumber ("Enter Positive Number :")) ;
    return 0 ;
}