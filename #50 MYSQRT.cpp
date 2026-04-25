/*Write a program to print sqrt of numbers, don't use built in sqrt
function*/
#include <iostream>
#include <cfloat>
#include <cmath>
using namespace std ;
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
float MYSQRT (float number){

 return pow(number,0.5);
  
}
int main (){
    float number = ReadFloatNumber ("Please enter the number to give you the sqrt for it:");
    cout<<"My sqrt result : "<<MYSQRT(number)<<endl;
    cout<<"C++ sqrt result : "<<sqrt(number)<<endl;
    return 0 ;
}