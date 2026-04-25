//Write a program to read a number letter and print letter pattern 
#include <iostream>
enum enletters{A=65,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z} ;
using namespace std ;
unsigned int ReadPositiveNumber (string message){
   int number ;
  cout<<message<<"\n";
  do{
  cin>>number ;
  if(number<0||number>26){
    cout<<"Please enter numberfrom 1 to 26: \n";
  } ;
}while (number<0||number>26) ;
return (unsigned int)number ;
}
void PrintIvertedPattern (unsigned int number){
   for(unsigned short i =enletters::A  ;i<=enletters(number+64);i++){
        for(unsigned short j=1;j<=i-64;j++){
            cout<<char(enletters(i)) ;
        } ;
        cout<<endl ;
    }
}
int main (){
    PrintIvertedPattern(ReadPositiveNumber("Write a number to print inverted pattern as follows :")) ;
    return 0 ;
}