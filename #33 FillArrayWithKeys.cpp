/*Write a program to read how many keys to generate and fill
them in array then print them on the screen.*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std ;
enum enrandom {SmallLetter,CapitalLetter,SpecialCharacters,Digit};
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
int RandomNumber(int from ,int to){
    return (rand()%(to-from+1)+from);
}
char Random(enrandom request){
    switch (request)
    {
    case enrandom::SmallLetter :
     return char(RandomNumber(97,122)) ;
    case enrandom::CapitalLetter :
    return char(RandomNumber(65 ,90)) ;
    case enrandom::SpecialCharacters :
    return char(RandomNumber(33 ,47)) ;
    case enrandom::Digit :
    return char(RandomNumber(48,57)) ;
    default:
    return char(0) ;
        break;
    } ;
    
}
string GenerateRandomWord (enrandom randomtype ,unsigned short length){
    string word = "" ;
    for(unsigned short i=1;i<=length;i++){
      
         word =word+Random(randomtype) ;    

    }
    return word;
}
string GenerateKeys (unsigned short numberofwords){
    string key = "" ;
    for(unsigned short i=1;i<=numberofwords;i++){ 
            key =key+GenerateRandomWord(enrandom::CapitalLetter,numberofwords) ;
        if(i!=numberofwords){
             key=key+'-' ;
        }
    }
    return key ;
}
void FillKeysArray (string array [100], unsigned short length){
    for(unsigned short i =0 ;i<length;i++){
        array[i]=GenerateKeys(4);
    }
}
void PrintStringArrayElements(string array [100] ,unsigned short length){
    for(unsigned short i=0;i<length;i++){
        cout<<"Array["<<i+1<<"] : "<<array[i]<<endl ;
    }
}
int main(){
    srand((unsigned)time(NULL));
    string keys [100];
    unsigned short length = ReadArrayLength(100,"Enter numbers of keys :") ;
    FillKeysArray(keys,length) ;
    cout<<"Array elements :\n\n";
    PrintStringArrayElements(keys,length) ;
    return 0 ;
}