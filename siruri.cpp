#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;



/// MESAJE ///
void TEST(){
        printf("x=");
        int i;
        char    s[]="absolvent",
                x[]="absolvent";
        for(i=0;i<strlen(s);i++){
                if(strcmp(x,s+i)<0)
                strcpy(x,s+i);
        }
        printf("%s\n", x );;
}

/// SUBPROGRAME ///
void help(){

}

void revvoc(){
        printf("called");

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

  void G68(){
        char a[256];
        int N;
        inr r0;
        int i;
        int nv;
        int Tnv;
        
        for(k=0;k<N;k++){
                scanf("%s\n", a );
                if(strchr("aeiouAEIOU",a[k])){

                }
        }
  }

/// DISPECERAT ///
int getc(){
char C[20];
cout<<">";
cin>>C;

        if (strstr(C,            "Q!")){
                return 0;
        } else if (strstr(C,         "help")){
                help();
        } else if (strstr(C,         "TEST")){
                TEST();
        } else if (strstr(C,    "palindrom")){
                palindrom();
        } else if (strstr(C,    "sufix_comun")){
                sufix_comun();
        } else {
                printf("type \"help\" for a list of commands");
        }

return 1;
}



int main()
{
int q=0;
while(getc());


  return 0;
}
