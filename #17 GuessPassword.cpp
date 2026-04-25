//Write a program to read Paasword and guess it 
#include <iostream>
#include <string>
enum enletters{A=65,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z} ;
using namespace std ;
string ReadPassword (string message){
    string password ;
    cout<<message<<"\n" ;
    do{
        cin>>password ;
        if(password.length()!=3){
            cout<<"Please enter 3-Letters capital:\n" ;
        }
    }while (password.length()!=3) ;

    return password ;

}
bool GuessPassword (string password){
 string word ="";
 unsigned int trials=0 ;
   for(unsigned short i =enletters::A  ;i<=enletters::Z;i++){
        for(unsigned short j=enletters::A;j<=enletters::Z;j++){
            for(unsigned short z=enletters::A;z<=enletters::Z;z++){
                trials+=1 ;
                word = word + char(i) +char(j)  +char(z);
                cout<<"Trial ["+to_string(trials)+"] : "<<word<<"\n" ;
                if(word==password){
                   cout <<"\n\nPassword is "<<word <<"\n";
                   cout<<"Found after "<<trials<<" Trial(s)\n";
                   return 1;
                }
                 word ="";
        
            } ;
             
        } ;
        
        cout<<endl ;
    } ;
    cout<<"Not Founded\n";
    return 0 ;
} 
int main (){
    GuessPassword(ReadPassword("Enter password in 3-Letters capital :"));
    return 0 ;
}