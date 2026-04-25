/*Write a program to read positive N elements and store them in array then print all array elementsand ask for a number to check, 
then print how many number a certain element repeated in that array.*/
#include <iostream> 
#include <string>
using namespace std ;
unsigned int ReadPositiveNumber (string message){
    int number ;
    cout<<message ;
    do{
        cin>>number ;
        if(number<0){
            cout<<"Please enter positive number : \n" ;
        } ;
    }while(number<0);
    return number ;
}
unsigned short ReadArrayLength (string message,unsigned short maxlength){
    int length ;
    cout<<message ;
    do{
        cin>>length ;
        if(length>maxlength||length<0){
            cout<<"Please enter positive number (max 100) : \n" ;
        } ;
    }while(length>maxlength||length<0);
    return length ;
}
void ReadArrayElements (unsigned int array[100],unsigned short &length){
    length =ReadArrayLength("Enter number of elements in array : \n",100);
    cout<<"Enter array elements : \n";
      for(unsigned short i =0;i<length;i++){
        array[i]=ReadPositiveNumber("Element["+to_string(i+1)+"] :") ;
       } ;
    cout<<endl ;
}
unsigned short CheckRepeated (unsigned int check,unsigned int array[100],unsigned short length){
    unsigned short count =0 ;
    for( unsigned short i = 0 ;i<length;i++){
        if(array[i]==check){
            count+=1 ;
        } ;
    }
    return count ;
}
void PrintArray (unsigned int array[100],unsigned short length){
     for(unsigned short i =0;i<length;i++){
       cout<< array[i]<<" ";
       } ;
}
void PrintCheckRepeated (unsigned int check,unsigned int array[100],unsigned short length){
    cout<<check<<" is repeated "<<CheckRepeated(check,array,length)<<" time(s)" ;
}
int main (){
    unsigned int array[100] ;
    unsigned short length ;
    ReadArrayElements(array,length) ;
    unsigned int check =ReadPositiveNumber("Enter the number you want to check : ");
    cout<< "Original array: " ;
    
    PrintArray (array, length) ;
    cout<<endl ;
    PrintCheckRepeated(check,array,length);
    cout<<endl ;

    return 0 ;
}
