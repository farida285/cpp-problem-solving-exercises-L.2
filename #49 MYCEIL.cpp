/*Write a program to print ceil of numbers, don't use built in ceil
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
float GetFractionPart(float number){
    return((number-(int)number)) ;
}
int MYCEIL (float number){
if(abs(GetFractionPart(number))){
     if(number>=0) {
    return((int)number+1);
  }else{
    return ((int)number) ;
  }
}else {
    return number ;
}
 
}
int main (){

    float number = ReadFloatNumber ("Please enter the number to give you the ceil for it:");
    cout<<"My ceil result : "<<MYCEIL(number)<<endl;
    cout<<"C++ ceil result : "<<ceil(number)<<endl;
    return 0 ;
}
