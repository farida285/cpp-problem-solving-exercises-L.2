/*Write a program to fill array with numbers, then check if it is Palindrome
array or not, Note: Palindrome array can be read the same from right to
left and from left to right.*/
#include <iostream>
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
void ReadArrayElement(int array[100],unsigned short length) {
    for(unsigned short i=0;i<length;i++){
        cout<<"Enter element "<<i+1<<": \n" ;
        cin>> array[i] ;
    }
}
void PrintArray (int array[100],unsigned short length){
    cout<<"[ " ;
     for(unsigned short i =0;i<length;i++){
       cout<< array[i]<<" ";
       } ;
    cout<<"]" ;
}
bool CheckPalindrome (int array[100],unsigned short length){
    for(unsigned short i =0 ; i<length ;i++ ){
        if(array[i]!=array[length-1-i]){
            return 0;
        }
    }
    return 1 ;
}

int main (){
    int array [100];
    unsigned short length = ReadArrayLength ("Please enter the length of array do you want to check it:",100);
    ReadArrayElement(array,length);
    cout<<"Array element = " ;
    PrintArray(array,length) ;
    cout<<endl ;
    if(CheckPalindrome(array,length)){
        cout<<"Yes, array is Palindrome";
    }else {
        cout<<"No, array is not Palindrome" ;
    }
    return 0 ;
}