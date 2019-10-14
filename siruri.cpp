#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;



/// MESAJE ///
void msg(char M[]){
   printf("%s\n",M );
}

/// SUBPROGRAME ///
void help(){
  string arg0, arg1, arg2, arg3;
  printf(
         "help          : listeaza comenzile posibile\n"
          "palindrom    : determina daca un cuvant este palindrom\n"
          "replace (\"sir\",\"sir\"): insereaza in date.in sirul dat la fiecare aparitie a sir \n"
          "sufix_comun (\"sir\",\"sir\"): afiseaza cel mai mare sufix comun a celor 2 siruri",
          arg0, arg1, arg2, arg3
        );
}

  void palindrom(){
    printf("NU MERE INCA\n");
  }

  void sufix_comun(){
      char a, b;
      scanf("%s\n", a);
      scanf("%s\n", b);
      int ka=strlen(a), kb=strlen(b);
      printf("ka%c, kb%c ... \n",ka, kb);
      while(a[ka]==b[kb]){
        --ka;
        --kb;
      }
      while(ka>=0){
         printf("%c",a[ka++]);
      }



  }

/// DISPECERAT ///
int getc(){
char C[20];
cout<<">";
cin>>C;

   if(strstr(C,            "Q!")){
  return 0;
   }else if(strstr(C,         "help")){
      help();
   }else if(strstr(C,    "palindrom")){
      palindrom();
   }else if(strstr(C,    "sufix_comun")){
      sufix_comun();
   }else{
      msg("type \"help\" for a list of commands");
   }

return 1;
}



int main()
{
int q=0;
while(getc());


  return 0;
}
