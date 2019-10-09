#include <iostream>
#include <fstream>
using namespace std;



/// MESAJE ///
void msg(string M){

/// DISPECERAT ///
void getc(){
string C;
cout<<">";
cin>>C;

if(strcmp(C, "help"))
  help();
if(strcmp(C, "palindrom"))
  palindrom();
else
  msg("type \"help\" for a list of commands");
}

void help(){
  cout<<"help       : listeaza comenzile posibile\n
         palindrom  : determina daca un cuvant este palindrom\n
         replace (\"sir\",\"sir\"): insereaza in date.in sirul dat la fiecare aparitie a sir ";
}
//


  cout<<'\n'<<M<<'\n';

}


int main()
{



  return 0;
}
