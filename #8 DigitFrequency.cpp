//This Program to read a digit and a number , then print digit frequency in that number
#include <iostream>
#include <string>
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
unsigned short ReadOneNumber (string message){
    short digit ;
    cout<<message<<"\n" ;
    do{
        cin>>digit ;
      if(digit<0){
    cout<<"Please enter positive number: \n";};
      if(digit>9){
    cout<<"Please enter one digit : \n";
      };
    }while((digit<0)||(digit>9));
    return digit;
}
unsigned short DigitFrequency (unsigned short digit,unsigned long int number){
   unsigned short remainder = 0 ;
   unsigned short frequency = 0;
    while(number>0){
        remainder =number%10 ;
        if(remainder==digit){
            frequency+=1 ;
        } ;
        number/=10 ;
    }
    return frequency ;
} ;
void PrintDigitFreq (unsigned short digit,unsigned long int number){
 cout<<"Digit "<<digit<<" Frequency is "<< DigitFrequency(digit,number)<<" Time(S)" ;
};
int main (){
   PrintDigitFreq(ReadOneNumber("Enter one digit to check freq: "),ReadPositiveNumber("Enter Positive number")) ;
    return 0 ;
}