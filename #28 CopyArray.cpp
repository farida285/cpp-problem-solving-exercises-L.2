//Write a program to fill array with max size 100 with random numbers from 1 to 100, copy it to another array and print it.
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std ;
unsigned short ReadArrayLength(string message , unsigned short maxlength){
    int length ;
    cout<<message ; 
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
void ReadRandomElements (unsigned int array[100],unsigned short &length,unsigned short maxlength){
    length =ReadArrayLength("Enter number of elements in array (max 100): \n",maxlength);
      for(unsigned short i =0;i<length;i++){
        array[i]=RandomNumber(1,100) ;
       } ;
}
void CopyArray (unsigned int soursearray[100],unsigned short length,unsigned int destnationarray[100]){
    for(unsigned short i=0;i<length;i++){
        destnationarray[i]=soursearray[i] ;
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
    unsigned short length ;
    ReadRandomElements(array1,length,100) ;
    CopyArray(array1,length,array2);
    cout<<"Array 1 elements : " ;
    PrintArray(array1,length) ;
    cout<<"\nArray 2 elements : " ;
    PrintArray(array2,length) ;

    return 0 ;
}