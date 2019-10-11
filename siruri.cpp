#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;



/// MESAJE ///
void msg(char M[]){}

/// SUBPROGRAME ///
void help(){
  string arg0, arg1, arg2, arg3;
  printf(
          "help       : listeaza comenzile posibile\n"
          "palindrom  : determina daca un cuvant este palindrom\n"
          "replace (\"sir\",\"sir\"): insereaza in date.in sirul dat la fiecare aparitie a sir \n",
          arg0, arg1, arg2, arg3
        );
}

  void palindrom(){
    printf("NU MERE INCA\n");
  }

/// DISPECERAT ///
int getc(){
char C[20];
cout<<">";
cin>>C;

     if(strstr(C,            "Q!"))
  return 0;
else if(strstr(C,         "help"))
  help();
else if(strstr(C,    "palindrom"))
  palindrom();
else
  msg("type \"help\" for a list of commands");
return 1;
}



int main()
{
int q=0;
while(getc());


  return 0;
}
