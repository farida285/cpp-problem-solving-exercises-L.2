/*Write a program to fill array with max size 100 with random numbers from
1 to 100, copy it to another array in reverse order and print it.*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std ;
int RandomNumber (int from , int to){
    return (rand()%(to-from+1)+from) ;
}
unsigned short ReadArrayLength (unsigned short MaxLength , string massege ){
 int length ;
 cout << massege <<"\n" ;
do {
    cin>> length ;
    if (length>MaxLength||length<=0){
        cout << "Unavalible length !!\n" ;
        cout <<"Please enter length in range from 1 to "<<MaxLength<<":\n";
    }
 }while (length>MaxLength||length<=0);
 return length ;
 

} 
void FillRandomArray(unsigned int array [100],unsigned short length){
    for(unsigned short i =0;i<length;i++){
        array[i]=RandomNumber(1,100) ;
    } ;
}
void CopyArrayInReverseOrder (unsigned int arrsourse[100],unsigned int arrdestination[100],unsigned short length ){
    for(unsigned short i = 0 ;i<length;i++){
        arrdestination[i]=arrsourse[length-1-i] ;
    }
}
void PrintArray (unsigned int array [100],unsigned short length){
      cout <<"[ ";
    for(unsigned short i =0;i<length;i++){
        cout << array[i]<<" ";
    } ;
    cout<<"]";
}
int main (){
    srand((unsigned)time(NULL)) ;
    unsigned int array [100] , copiedarray[100] ;
    unsigned short length = ReadArrayLength (100,"Enter the length of array (max 100) : ") ;
    FillRandomArray(array,length) ;
    CopyArrayInReverseOrder(array,copiedarray,length) ;
    cout<<"Array 1 elements = ";
    PrintArray(array,length);
    cout<<endl ;
    cout<<"Array 2 elements after copying array 1 in reverse order = ";
    PrintArray(copiedarray,length);
    cout<<endl ;

    return 0 ;
}
