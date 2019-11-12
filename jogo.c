int main(){
    int const WIDTH = 100;
    int const HEIGHT = 100;
    int const CYCLES = 1000;
    int grid[HEIGHT][WIDTH];
    int temp[HEIGHT][WIDTH];

    int row;
    int col;
    for(row = 0; row < HEIGHT; row++){
        for(col = 0; col < WIDTH; col++){
            grid[row][col] = 0;
        }
    }

    int a;
    int b;
    int c;
    int neighbours;
    for(a = 0; a < CYCLES; a++){
        for(row = 0; row < HEIGHT; row++){
            for(col = 0; col < WIDTH; col++){
                temp[row][col] = 0;
            }
        }
        for(row = 0; row < HEIGHT; row++){
            for(col = 0; col < WIDTH; col++){
                neighbours = 0;
                for(c = -1; c < 2; c++){
                    for(b = -1; b < 2; b++){
                        if(b != 0 && c != 0 && grid[(row + c) % HEIGHT][(col + b) % WIDTH] == 1){
                            neighbours++;
                        }
                    }
                }
                if(grid[row][col] == 1){
                    if(neighbours < 2 || neighbours > 3){
                        temp[row][col] = 0;
                    }else{
                        temp[row][col] = 1;
                    }
                    else if(grid[row][col] == 0){
                          if(neighbours == 3){
                            temp[row][col] = 0;
                         }else{
                              temp[row][col] = 1;
                           }
                      }        
            }
        }
        for(row = 0; row < HEIGHT; row++){
            for(col = 0; col < WIDTH; col++){
                grid[row][col] = temp[row][col];
                printf("%d", grid[row][col]);
            }
            printf("\n");
        }
        printf("\n");
    }
}
