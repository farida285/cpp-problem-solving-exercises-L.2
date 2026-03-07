//write a program to print table from n to m 
#include <iostream>
#include <string>
using namespace std ;

void PrintTableHeader(short from , short to){
cout<<"\t\t\t  Multiplication Table from "+to_string(from)+" to "+to_string(to)+"\n" ;
    for(short i=from ;i<=to;i++){
    cout<<"\t"<<i ;
  } ;
  cout<<"\n" ;
 for(short j=from ;j<=to;j++){
    cout<<"---------" ;
  } ;
  cout<<endl ;
} ;
string ColumSeprator (short row){
    if(row<10){
        return "   |  ";
    }else{
        return "  |  " ;
    }

} ;
void PrintMultiplicationTable(short from , short to){
    PrintTableHeader(from ,  to) ;
    for(short row =1;row<=10;row++){
         cout<<row<<ColumSeprator(row) ;  
    
        for(short column=from ;column<=to;column++)
           {
               cout<<(row*column)<<"\t";
           };

    cout<<endl;
 };

}
int main (){
     PrintMultiplicationTable(1 , 10);
    return 0 ;
}