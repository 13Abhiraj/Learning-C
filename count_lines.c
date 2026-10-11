#include <stdio.h>
int main(){

    FILE *file = fopen("C:\\Abhiraj\\data.txt","r");
    if(file==NULL){
        printf("FIle could not be opened");
        return 1;
    }
    int ch;
    int count=0;
    while((ch = fgetc(file))!=EOF){
        if(ch == '\n'){
            count++;
        }
        else{
            continue;
        }
    }

    printf("Total lines in your file is %d",count+1);
}