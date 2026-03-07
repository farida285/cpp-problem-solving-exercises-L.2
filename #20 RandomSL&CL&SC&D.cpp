//write a program to write random small letter or capital letter or special Characters or digit according to what I want
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std ;
enum enrandom {SmallLetter,CapitalLetter,SpecialCharacters,Digit};
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
int main (){
    srand((unsigned)time(NULL)) ;

    cout<<Random(enrandom::SmallLetter)<<"\n" ;
    cout<<Random(enrandom::CapitalLetter) <<"\n";
    cout<<Random(enrandom::SpecialCharacters)<<"\n" ;
    cout<<Random(enrandom::Digit)<<"\n";
    return 0  ;

}