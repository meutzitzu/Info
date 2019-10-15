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

}

  void palindrom(){
    printf("NU MERE INCA\n");
  }

  void sufix_comun(){
      char a[256], b[256];
      int ka,kb,d;
      printf("s1= ");
      scanf("%s", a);
      printf("\ns2= ");
      scanf("%s", b);
      ka=strlen(a);
      kb=strlen(b);
      d=ka;

      while(a[ka]==b[kb]){
              --ka;
        --kb;
      }
      printf("sufix_comun(s2,s2)=\"");
      while(ka<d-1){
         printf("%c",a[++ka]);
      }
      printf("\"\n");
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
