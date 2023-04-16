#include <stdio.h>

int main(){
    FILE *fp = fopen("output.txt", "w");
    if(fp){
        fprintf(fp, "Hello, world!");
        fclose(fp);
    }
    
    return 0;
}