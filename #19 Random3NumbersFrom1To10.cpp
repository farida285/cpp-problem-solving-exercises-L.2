//write a program to write random number from 1 to 10
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std ;
int RandomNumber(int from ,int to){
    return (rand()%(to-from+1)+from);
}
int main (){
    srand((unsigned)time(NULL)) ;
    
    cout<<RandomNumber(1,10)<<"\n";
    cout<<RandomNumber(1,10)<<"\n";
    cout<<RandomNumber(1,10)<<"\n";
    
    return 0 ;
}