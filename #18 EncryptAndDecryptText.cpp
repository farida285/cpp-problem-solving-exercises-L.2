//write numbeer to encrypt & decrypt name
#include <iostream>
#include <string>
using namespace std ;
string ReadName (string massege ){
    string name ;
    cout<<massege<<"\n" ;
    getline(cin,name) ;
    return name ;
}
string EncryptString (string Sentence , short EncryptionIndex){
   for(short i = 0 ;i<Sentence.length();i++){
    Sentence [i]= char(int(Sentence[i]-EncryptionIndex*2)) ;
   }
   return  Sentence ;
}
string DecryptString (string Sentence, short EncryptionIndex){
       for(short i = 0 ;i<Sentence.length();i++){
     Sentence [i]= char(int(Sentence[i]+EncryptionIndex*2)) ;
    } ;
    return Sentence ;

}
int main (){
    string name = ReadName("Enter your name") ;
    string Encrypt = EncryptString(name,5) ;
    cout <<"Name before encrypt: "<<name<<"\n";
    cout<<"Name after encrypt: "<<Encrypt<<"\n";
    cout<<"Name after decrypt: "<<DecryptString (Encrypt, 5)<<"\n";

    return 0 ;



}
