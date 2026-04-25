//write a program to print all Perfect Numbers from 1 to N
#include <iostream>
#include <cmath>
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
unsigned int SumAllDivisors (unsigned int n){
    unsigned int  sum =0;
    unsigned int  c =floor(n/2) ;
    for(unsigned int i=1;i<=c;i++){
        if(n%i==0){
            sum+=i ;
        } ;
    };
    return sum ;

} ;
bool IsPerfect (unsigned int n){
    return (SumAllDivisors(n)==n) ;
}
void PrintPerfectnumbers (unsigned int n){
    cout<<"The perfect Numbers : \n" ;
    for(unsigned int i =1;i<=n;i++){
       if(IsPerfect(i)){
        cout<<i<<"\n";
       };
    };
};
  
int main (){
    PrintPerfectnumbers(ReadPositiveNumber("This program to print all Perfect Numbers from 1 to N, Enter N :"));
    return 0 ;
}
