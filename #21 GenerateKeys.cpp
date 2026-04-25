//Write a program to read how many keys to generate and print them on the screen.
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std ;
enum enrandom {SmallLetter,CapitalLetter,SpecialCharacters,Digit};
unsigned int ReadPositiveNumber (string message){
    int  n ;
    cout<<message<<"\n";
    do{
    cin>> n ;
    if(n<=0){
        cout<<"Please enter number > 0\n";
    }} while (n<=0) ;
    
    return n ;
} ;
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
void PrintKeys(unsigned short numberofwordsinkey,unsigned int numberofkeys){
    for(unsigned int i=1;i<=numberofkeys;i++){
        cout<<"Key["<<i<<"] : "<<GenerateKeys(numberofwordsinkey)<<endl ;
    }
}
int main(){
    srand((unsigned)time(NULL));
    PrintKeys(ReadPositiveNumber ("Enter how many word in key : "),ReadPositiveNumber ("Enter how many keys to generate : ")) ;
    return 0 ;
}