/*Write a program to print round of numbers, don't use built in round
function*/
#include <iostream>
#include <cfloat>
#include <cmath>
using namespace std ;
float GetFractionPart(float number){
    return((number-(int)number)) ;
}
float ReadFloatNumber (string message){
    float number ;
    cout<<message<<"\n";
    do{
        cin>> number ;
        if(number>FLT_MAX||number<-FLT_MAX){
            cout<<"Unavalible Number !!\n" ;
            cout<<"Please enter the length in range from "<<FLT_MIN<<" to "<<-FLT_MAX<<":\n" ; 
        }
    }while (number>FLT_MAX||number<-FLT_MAX) ;
    return number ;
}  
int MYROUND (float number){
    float fraction = GetFractionPart(number) ;
  if(fraction>=0.5){
    return ((int)number+1) ;
  }if(fraction<=-0.5) {
    return((int)number-1);
  }
  else{
    return((int)number)  ;
  }
}

int main (){

    float number = ReadFloatNumber ("Please enter the number to give you the round for it:");
    cout<<"My round result : "<<MYROUND(number)<<endl;
    cout<<"C++ round result : "<<round(number)<<endl;
    return 0 ;
}