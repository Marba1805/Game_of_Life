#import <stdio.h>

void comando(v,i,c){
 
     for(i=0; i<15; i++) {
      for(c=0;c<15;c++) {
         printf("Escolha a posicao da vida:", i, c);
         scanf("%d", &v[i][c]);
      }
   }
}
  


void main (){
  
char tab[15][15] = {
   {*,*,*,*,*,*,*,*,*,*,*,*,*,*,*},
   {*,*,*,*,*,*,*,*,*,*,*,*,*,*,*},
   {*,*,*,*,*,*,*,*,*,*,*,*,*,*,*},
   {*,*,*,*,*,*,*,*,*,*,*,*,*,*,*},
   {*,*,*,*,*,*,*,*,*,*,*,*,*,*,*},
   {*,*,*,*,*,*,*,*,*,*,*,*,*,*,*},
   {*,*,*,*,*,*,*,*,*,*,*,*,*,*,*},
   {*,*,*,*,*,*,*,*,*,*,*,*,*,*,*},
   {*,*,*,*,*,*,*,*,*,*,*,*,*,*,*},
   {*,*,*,*,*,*,*,*,*,*,*,*,*,*,*},
   {*,*,*,*,*,*,*,*,*,*,*,*,*,*,*},
   {*,*,*,*,*,*,*,*,*,*,*,*,*,*,*},
   {*,*,*,*,*,*,*,*,*,*,*,*,*,*,*},
   {*,*,*,*,*,*,*,*,*,*,*,*,*,*,*},
   {*,*,*,*,*,*,*,*,*,*,*,*,*,*,*},
    };
  
  
