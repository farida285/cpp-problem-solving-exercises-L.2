/*Write a program to dynamically read numbers and save them in an array
Max size of array is 100, allocate simi-dynamic array length.*/
#include <iostream>
using namespace std ;
int ReadNumber (string massege){
    int number ;
    cout<<massege ; 
    cin>>number ;
    return number ;
}
bool YesOrNo (string massege){
    int Answer ;
    do{
    cout<<massege<<" [0]No OR [1]Yes ? ";
    cin>>Answer ;
    }while(Answer !=0 && Answer !=1);
    return Answer==1 ; 

}
void ReadArrayFromUser (int array[100],unsigned short &length,unsigned short maxsize ){
    length = 0 ;
    do{
        array[length]= ReadNumber("Please enter the number : ") ;
        length++ ;
        if(length == maxsize){
            cout<<"You are turn the maximum size .\n" ;
            break;
        }
    } while (YesOrNo("Do you want to add more number ?"));
    
}
void PrintArrayElements(int array [100] ,unsigned short length){
    for(unsigned short i=0;i<length;i++){
        cout<<array[i]<<" " ;
    }
}
int main () {
    int array [100] ;
    unsigned short length ;
    ReadArrayFromUser (array,length,100) ;
    cout<<"Array length: "<<length<<"\n";
    cout<<"Array [elements]: " ;
    PrintArrayElements(array,length);
    return 0 ;
}
