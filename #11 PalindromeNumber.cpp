//Write a program to read a number and check if it's palindrome ?
#include <iostream>
using namespace std ;
unsigned long int ReadPositiveNumber (string message){
  long long int number ;
  cout<<message<<"\n";
  do{
  cin>>number ;
  if(number<=0){
    cout<<"Please enter positive number: \n";
  } ;
}while (number<=0) ;
return (unsigned long int)number ;
}
unsigned long int ReverseNumber(unsigned long int number){
    unsigned long int newnumber =0 ;
    unsigned short remainder = 0;
    while(number>0){
        remainder=number%10;
        number/=10 ;
        newnumber=newnumber*10+remainder ;
    }
    return newnumber ;
}
bool IsPalindrome (unsigned long int number){
   return(number==ReverseNumber(number)) ;
    
};
void PrintCheckPalindrome (unsigned long int number){
    if(IsPalindrome (number)){
        cout <<"Yes , it is a palindrome number.\n";
    }else {
           cout <<"No , it is not a palindrome number.\n";
    }
}
int main(){
    PrintCheckPalindrome(ReadPositiveNumber("Enter a number to check if it's palindrome : "));

    return 0 ;
}