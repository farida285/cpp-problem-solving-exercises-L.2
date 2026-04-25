/*Write a program to print floor of numbers, don't use built in floor
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
int MYFLOOR (float number){

    if(abs(GetFractionPart(number))>0){
        
        if(number<0) {
          return((int)number-1);
        }
        else{
         return ((int)number) ;
            }   
    }else{
        return number ;
    }

  
}

int main (){

    float number = ReadFloatNumber ("Please enter the number to give you the floor for it:");
    cout<<"My floor result : "<<MYFLOOR(number)<<endl;
    cout<<"C++ floor result : "<<floor(number)<<endl;
    return 0 ;
}
