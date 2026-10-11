#include <stdio.h>
int main(){

    FILE *file = fopen("C:\\Abhiraj\\merge.txt","r");
    if(file == NULL){
        printf("File cant be opened");
        return 1;
    }
    int ch1=0;
    int ch2=1;
    int count=0;
    while((ch1 =ch2)!= EOF){
        ch2 = fgetc(file);
        if(ch2==' '&&ch1 != ' '){
            count++;
    }

    if(ch2=='\n' &&ch1 != ' '){
            count++;
    }

    if(ch2==EOF && ch1 != ' '){
            count++;
    }
}
printf("Total words in file is %d",count);
fclose(file);
return 0;
}