//write a program to print Prime Numbers from 1 to N
#include <iostream>
#include <string>
#include <cmath>
using namespace std ;
int ReadPositiveNumber (){
    int n ;
    cout<<"Enter the Number to check prime numbers from 1 to it: \n";
    do{
    cin>> n ;
    if(n<=0){
        cout<<"Please enter number > 0\n";
    }} while (n<=0) ;
    
    return n ;
} ;
bool CheckPrime (int n){
    int c=round(n/2);
    if(n<=2){
        return 1 ;
    }else { 
        for(int i=2;i<=c;i++){

        if(n%i==0){
            return 0 ;
        } ;

        } ;
    return 1 ;

    }  ;
} ;
void PrintPrimeNumbersFrom1To(unsigned int N){
     cout<<"Prime Numbers from 1 to "+to_string(N)+" :\n" ;
    for(unsigned int i=1;i<=N;i++){
        if(CheckPrime(i)){
            cout<<i<<"\n" ;
        } ;
    } ;
} ;
int main (){
    PrintPrimeNumbersFrom1To(ReadPositiveNumber()) ;
    return 0;
}