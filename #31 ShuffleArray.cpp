/*Write a program to fill array with ordered numbers from 1 to N, 
then print it, after that shuffle this array and print it after shuffle.*/
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
void FillOrderedArray(unsigned int array[100],unsigned short length){
    for(unsigned int i=0;i<length;i++)
    {
        array[i]=i+1 ;

    } ;
}
void Swap (float &number1,float &number2){
  float temp ;
   temp=number1 ;
   number1=number2 ;
   number2=temp ;
 } ;
void SheffleArray(unsigned int array[100],unsigned short length){
 
      for(unsigned short i =0;i<length;i++){
        swap(array[RandomNumber(0,length-1)],array[RandomNumber(0,length-1)]) ;
       };
  
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
    unsigned short arraylength=ReadArrayLength("Enter number of elements in array (max 100): \n",100);

    FillOrderedArray(array1,arraylength) ;
    cout<<"\nArray elements before shuffle :\n" ;
    PrintArray(array1,arraylength) ;

    SheffleArray(array1,arraylength) ;
    cout<<"\n\nArray  elements after shuffle :\n" ;
    PrintArray(array1,arraylength) ;

    return 0 ;
}