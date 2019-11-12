int main(){
    int const larg = 15; //largura
    int const alt = 15; //altura
    int const cicl = 50; //ciclo
    int grad[alt][larg]; //grade
    int temp[alt][larg]; //temporaria

    int linha; //linha
    int col; //coluna
    for(linha = 0; linha < alt; linha++){
        for(col = 0; col < larg; col++){
            grad[linha][col] = 0;
        }
    }

    int a;
    int b;
    int c;
    int neighbours;
    for(a = 0; a < cicl; a++){
        for(linha = 0; linha < alt; linha++){
            for(col = 0; col < larg; col++){
                temp[linha][col] = 0;
            }
        }
        for(linha = 0; linha < alt; linha++){
            for(col = 0; col < larg; col++){
                neighbours = 0;
                for(c = -1; c < 2; c++){
                    for(b = -1; b < 2; b++){
                        if(b != 0 && c != 0 && grad[(linha + c) % alt][(col + b) % larg] == 1){
                            neighbours++;
                        }
                    }
                }
                if(grad[linha][col] == 1){
                    if(neighbours < 2 || neighbours > 3){
                        temp[linha][col] = 0;
                    }else{
                        temp[linha][col] = 1;
                    }
                    else if(grad[linha][col] == 0){
                          if(neighbours == 3){
                            temp[linha][col] = 0;
                         }else{
                              temp[linha][col] = 1;
                           }
                      }        
            }
        }
        for(linha = 0; linha < alt; linha++){
            for(col = 0; col < larg; col++){
                grad[linha][col] = temp[linha][col];
                printf("%d", grad[linha][col]);
            }
            printf("\n");
        }
        printf("\n");
    }
}
