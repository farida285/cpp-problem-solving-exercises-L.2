//write a program to check the number perfect or not 
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
void PrintCheckPerfect (unsigned int n){
    if(IsPerfect(n)){
        cout<<n<<" is Perfect.\n";
    }else{
         cout<<n<<" is not Perfect.\n";
    }
}
int main (){
    PrintCheckPerfect(ReadPositiveNumber("Enter the Number to check is Perfect or not :"));
    return 0 ;
}
