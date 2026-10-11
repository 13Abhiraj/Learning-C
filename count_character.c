#include <stdio.h>
int main(){

    FILE *file = fopen("C:\\Abhiraj\\data.txt","r");
    if(file == NULL){
        printf("File could not be opened");
        return 1;
    }
    int count =0;
    int ch;
    while((ch = fgetc(file))!= EOF){
       count++;
    }

    printf("Total characters in your file is %d",count);

    fclose(file);
    return 0;
}