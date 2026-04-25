/*Write a program to print abs of numbers, don't use built in abs
function*/
#include <iostream>
#include <cfloat>
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
float MYABS (float number){
   if(number>=0){
    return number ;
   }else{
    return (number/-1) ;
   }
}

int main (){

    float number = ReadFloatNumber ("Please enter the number to give you the abs for it:");
    cout<<"My abs result : "<<MYABS(number)<<endl;
    cout<<"C++ abs result : "<<abs(number)<<endl;
    return 0 ;
}
