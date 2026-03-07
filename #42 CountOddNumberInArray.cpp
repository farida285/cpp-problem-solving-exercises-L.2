#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std ;
unsigned short ReadArrayLength (string massage,unsigned short maxlength){
    int length ;
    cout<<massage<<"\n";
    do{
        cin>> length ;
        if(length>maxlength||length<0){
            cout<<"Unavalible length !!\n" ;
            cout<<"Please enter the length in range from 1 to "<<maxlength<<":\n" ;
        }
    }while (length>maxlength||length<0) ;
    return(unsigned short)length ;
}  
void PrintArray (int array[100],unsigned short length){
    cout<<"[ " ;
     for(unsigned short i =0;i<length;i++){
       cout<< array[i]<<" ";
       } ;
    cout<<"]" ;
}
unsigned short CountOdd (int array[100],unsigned short length){
    unsigned short count =0 ;
    for(unsigned short i =0 ; i<length ;i++ ){
        if(array[i]%2!=0){
            count++ ;
        }
    }
    return count ;
}
int RandomNumber(int from ,int to){
    return (rand()%(to-from+1)+from);
}
void FillRandomElements ( int array[100],unsigned short length){
      for(unsigned short i =0;i<length;i++){
        array[i]=RandomNumber(1,100) ;
       } ;
}

int main (){
    srand((unsigned)time(NULL)) ;
    int array [100];
    unsigned short length = ReadArrayLength ("Please enter the length of array do you want to check it:",100);
    FillRandomElements(array,length);
    cout<<"Array element = " ;
    PrintArray(array,length) ;
    cout<<endl ;
    cout<<"Odd Numbers Count is: "<<CountOdd(array,length) ;
}