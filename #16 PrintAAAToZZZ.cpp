//Write a program to Print Words From AAA to ZZZ
#include <iostream>
#include <string>
enum enletters{A=65,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z} ;
using namespace std ;
void PrintWordFromAAAtoZZZ (){

   for(unsigned short i =enletters::A  ;i<=enletters::Z;i++){
        for(unsigned short j=enletters::A;j<=enletters::Z;j++){
            for(unsigned short z=enletters::A;z<=enletters::Z;z++){
              string word ="";
               word = word + char(i) +char(j)  +char(z);
                cout<<word<<"\n" ;
        
            } ;
        } ;
        cout<<endl ;
    } ;
} ;
int main (){
    PrintWordFromAAAtoZZZ();
    return 0 ;
}