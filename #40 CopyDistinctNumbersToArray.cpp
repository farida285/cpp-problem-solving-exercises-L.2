/*Write a program to fill array with numbers, then print distinct
numbers to another array.*/
#include <iostream>
using namespace std ; 
void AddArrayElement(int Number, unsigned int arr[100], unsigned short &arrLength) { 
 arrLength++; 
 arr[arrLength - 1] = Number;
 }
short NumberPositionInArray (unsigned int array[100],unsigned short length,unsigned int number ){
    for(unsigned short i = 0 ; i<length ;i++){
        if(array[i]==number){
            return i ;
        }
    }
    return -1;

}
bool IsNumberInArray (unsigned int number ,unsigned int array[100],unsigned short length ){
    return(NumberPositionInArray (array, length,number )!=-1) ;
  
}
void CopyDistinctArrayElementsUsingAddArrayElement (unsigned int soursearray[100],unsigned short sourcelength,unsigned int destnationarray[100],unsigned short &destnationlength){
 for (unsigned short i = 0; i < sourcelength; i++)
 {
     if(!IsNumberInArray(soursearray[i],destnationarray,destnationlength)){
        AddArrayElement(soursearray[i],destnationarray,destnationlength) ;
     }
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
    unsigned int array1[10]={10 ,10 ,10 ,50 ,50 ,70 ,70 ,70 ,70 ,90} ;
    unsigned int array2[10];
    unsigned short length1=10,length2=0 ;
    CopyDistinctArrayElementsUsingAddArrayElement(array1,length1,array2,length2);
    cout<<"Array 1 elements : " ;
    PrintArray(array1,length1) ;
    cout<<"\nArray 2 elements : " ;
    PrintArray(array2,length2) ;
    return 0 ;
}