//Write a program to fill array with max size 100 with random numbers from 1 to 100, copy Primenumbers only to another array and print it.
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std ;
unsigned short ReadArrayLength(string massege , unsigned short maxlength){
    int length ;
    cout<<massege ; 
    do{
        cin>>length ;
        if(length>maxlength||length<=0){
            cout<<"Error!!\nPlease enter the length in range from 1 to "<<maxlength<<".\n" ;
        }

    }while(length>maxlength||length<=0);
    return (unsigned short)length ;
}
int RandomNumber(int from ,int to){
    return (rand()%(to-from+1)+from);
}
void ReadRandomArrays (unsigned int array[100],unsigned short length){
 
      for(unsigned short i =0;i<length;i++){
        array[i]=RandomNumber(1,100) ;
       } ;
  
}
void SumOf2Arrays (unsigned int array1[100],unsigned int array2[100] ,unsigned int sumarray[100],unsigned short length){
   
    for(unsigned short i=0;i<length;i++){
     sumarray[i]=array1[i]+array2[i] ;
    }
}
void PrintArray (unsigned int array[100],unsigned short length){
    cout<<"[ " ;
     for(unsigned short i =0;i<length;i++){
       cout<< array[i]<<" ";
       } ;
    cout<<"]" ;
}
int main (){
    srand((unsigned)time(NULL));
    unsigned int array1[100];
    unsigned int array2[100];
    unsigned int sumarray[100];

    unsigned short arraylength=ReadArrayLength("Enter number of elements in array (max 100): \n",100);
    
    ReadRandomArrays(array1,arraylength) ;
    ReadRandomArrays(array2,arraylength) ;

    SumOf2Arrays(array1,array2,sumarray, arraylength);

    cout<<"\nArray 1 elements :\n" ;
    PrintArray(array1,arraylength) ;
    cout<<"\n\nArray 2 elements :\n" ;
    PrintArray(array2,arraylength) ;
    cout<<"\n\nSum Array elements :\n" ;
    PrintArray(sumarray,arraylength) ;


    return 0 ;
}