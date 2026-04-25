// Write a program to read array length with max size 100 and fill array with random numbers from 1 to 100
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
void ReadRandomElements (unsigned int array[100],unsigned short &length){
    length =ReadArrayLength("Enter number of elements in array (max 100): \n",100);
      for(unsigned short i =0;i<length;i++){
        array[i]=RandomNumber(1,100) ;
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
    unsigned int x[100];
    unsigned short length ;
    ReadRandomElements(x,length) ;
    cout<<"Array elements : " ;
    PrintArray(x,length) ;

    return 0 ;
}