//This Program to read  a number , then print all digit frequency in that number
#include <iostream>
#include <string>
using namespace std ;
unsigned long int ReadPositiveNumber (string massege){
  long long int number ;
  cout<<massege<<"\n";
  do{
  cin>>number ;
  if(number<=0){
    cout<<"Please enter positive number: \n";
  } ;
}while (number<=0) ;
return (unsigned long int)number ;
} ;
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
void PrintAllDigitsFreq (unsigned long int number){
    for(short i=0;i<=9;i++){
        unsigned short freq = DigitFrequency(i,number) ;
        if(freq>0){
             cout<<"Digit "<<i<<" Frequency is "<<freq<<" Time(S)\n" ;;
        }
    } ;
}
int main (){ 
   PrintAllDigitsFreq(ReadPositiveNumber("Enter a number to print all digit frequency in that number : ")) ;
    return 0 ;
}
