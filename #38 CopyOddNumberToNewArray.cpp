/*Write a program to fill array with max size 100 with random numbers from
1 to 100, copy only odd numbers to another array using AddArrayElement,
and print it.*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std ; 
void AddArrayElement(int Number, unsigned int arr[100], unsigned short &arrLength) { 
 arrLength++; 
 arr[arrLength - 1] = Number;
 }
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
void ReadRandomArray (unsigned int array[100],unsigned short &length,unsigned short maxlength){
    length =ReadArrayLength("Enter number of elements in array (max 100): \n",maxlength);
      for(unsigned short i =0;i<length;i++){
        array[i]=RandomNumber(1,100) ;
       } ;
}
bool CheckOddOrNot (int number){
    return (number%2!=0) ;
}
void CopyOddArrayElementsUsingAddArrayElement (unsigned int soursearray[100],unsigned short sourcelength,unsigned int destnationarray[100],unsigned short &destnationlength){
      for(unsigned short i =0 ;i<sourcelength;i++){
        if(CheckOddOrNot(soursearray[i])){
            AddArrayElement(soursearray[i],destnationarray,destnationlength) ;
        }
        
      } ;
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
    unsigned int array1[100],array2[100];
    unsigned short length1=0 , length2 =0;
    ReadRandomArray(array1,length1,100) ;
    CopyOddArrayElementsUsingAddArrayElement(array1,length1,array2,length2);
    cout<<"Array 1 elements : " ;
    PrintArray(array1,length1) ;
    cout<<"\nArray 2 elements : " ;
    PrintArray(array2,length2) ;

    return 0 ;
}