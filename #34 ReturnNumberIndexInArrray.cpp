/*Write a program to fill array with max size 100 with random numbers from
1 to 100, read number and return its index in array if found otherwise
return -1.*/
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
void FillRandomElements (unsigned int array[100],unsigned short length){
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
unsigned int ReadPositiveNumberInRange(unsigned int from , unsigned int to,string massege)
{    int number ;
    cout<<massege ;
    do{
        cin>> number ;
        if(number<from||number>to){
            cout<<"Erorr!!\n" ;
            cout<<"Please enter number in frange from "<<from<<" to "<<to<<" .\n" ;
        }
    }while (number<from||number>to) ;
    return (unsigned)number ;
}
short  NumberPositionInArray (unsigned int array[100],unsigned short length,unsigned int number ){
    for(unsigned short i = 0 ; i<length ;i++){
        if(array[i]==number){
            return i ;
        }
    }
    return -1;

}
int main (){
    srand((unsigned)time(NULL));
    unsigned int x[100];
    unsigned short length = ReadArrayLength("Enter number of elements in array (max 100): \n",100); ;
    FillRandomElements(x,length) ;
    cout<<"Array elements : " ;
    PrintArray(x,length) ;
    cout<<endl ;
    unsigned int searchnumber = ReadPositiveNumberInRange (1,100,"Please enter a number to search for : ") ;
    cout <<"Number you are Looking for is "<<searchnumber<<"\n" ;
    short position = NumberPositionInArray(x,length,searchnumber) ;
    if(position!=-1){
        cout<<"The number found at position "<<position<<endl;
        cout<<"The number found its order "<<position+1<<endl;
    }else{
        cout<<"The number is not found :-( \n" ;
    }
    return 0 ;
}