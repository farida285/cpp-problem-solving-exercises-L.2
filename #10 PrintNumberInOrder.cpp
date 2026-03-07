//write a program to read a number and print it in a order.
#include <iostream>
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
void PrintInOrder (unsigned long int number){
     number = ReverseNumber(number);
    unsigned short remainder = 0;
    while(number>0){
        remainder=number%10 ;
        number/=10;
        cout<<remainder<<"\n";
    }
}
int main(){
    PrintInOrder(ReadPositiveNumber("Enter a number to print it in a order : "));

    return 0 ;
}