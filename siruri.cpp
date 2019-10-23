#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;



/// MESAJE ///
void TEST(){
        /*
        printf("x=");
        int i;
        char    s[]="absolvent",
                x[]="absolvent";
        for(i=0;i<strlen(s);i++){
                if(strcmp(x,s+i)<0)
                strcpy(x,s+i);
        }
        printf("%s\n", x );;
        */
        char s1[20]="algo";
        char s2[20]="at";
        char s3[20]="ritm";
        

}


/// SUBPROGRAME ///
void help(){

}

void revvoc(){
        printf("called");

}

void stelutze(){
        char a[255];
        char b[255];
        char r[255];
        printf("a= ");
        scanf("%s", a);
        printf("a= %s\n", a);
        int N=strlen(a);
        printf("n= %d\n", N );
        int k=0, i=0;
        bool eq;
        while(isalpha(a[k]))
          {
                b[k]=a[k];
                k++;
          }
         b[k]=0;
        for( i= 0; i<N; i++ )
          {
                k=0;
                //printf("%d", k );
                while(isalpha(a[i]))
                  {
                          r[k++]=a[i++];
                  }
                r[k]=0; //NULL TERMINATOR
                if(strcmp(r, b)==0)
                  {
                        strcpy(a+i-k,a+i);
                        i-=k;
                  }
          }
        printf("rez= %s\n", a );
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
        int r0;
        int k;
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
        } else if (strstr(C,    "stelutze")){
                stelutze();
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
