//Write a program to fill array with max size 100 with random numbers from 1 to 100, copy Primenumbers only to another array and print it.
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
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
bool CheckPrime (int n){
    int c=round(n/2);
    if(n<=2){
        return 1 ;
    }else { 
        for(int i=2;i<=c;i++){

        if(n%i==0){
            return 0 ;
        } ;

        } ;
    return 1 ;

    }  ;
} ;
void CopyPrimeArray (unsigned int soursearray[100],unsigned short length,unsigned int destnationarray[100],unsigned short &primearraylngth ){
   primearraylngth = 0;
    for(unsigned short i=0;i<length;i++){
        if(CheckPrime(soursearray[i])==1){
           destnationarray[primearraylngth]=soursearray[i] ;
            primearraylngth ++ ;
        }
        
    }
    primearraylngth-- ;
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
    unsigned short arraylength , primearraylngth;
    
    ReadRandomElements(array1,arraylength) ;
    CopyPrimeArray(array1,arraylength,array2,primearraylngth);
    cout<<"Array 1 elements : " ;
    PrintArray(array1,arraylength) ;
    cout<<"\nArray 2 elements : " ;
    PrintArray(array2,primearraylngth) ;

    return 0 ;
}