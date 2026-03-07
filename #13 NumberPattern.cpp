//Write a program to read a number and print pattern as follows 
#include <iostream>
using namespace std ;
unsigned int ReadPositiveNumber (string massege){
   int number ;
  cout<<massege<<"\n";
  do{
  cin>>number ;
  if(number<=0){
    cout<<"Please enter positive number: \n";
  } ;
}while (number<=0) ;
return (unsigned int)number ;
}
void PrintIvertedPattern (unsigned int number){
    for(unsigned short i = 1 ;i<=number;i++){
        for(unsigned short j=1;j<=i;j++){
            cout<<i ;
        } ;
        cout<<endl ;
    }
}
int main (){
    PrintIvertedPattern(ReadPositiveNumber("Write a number to print inverted pattern as follows :")) ;
    return 0 ;
}