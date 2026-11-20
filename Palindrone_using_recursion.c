#include <stdio.h>

int isPalindronea(char str[] , int* size);

int main(){
    char str[50];
    printf("Enter your string: ");
    scanf("%[^\n]49s",str);
    int size =0;
    while(str[size] != '\0'){
        size++;
    }
    int ans = isPalindronea(str,&size);
    printf((ans ==0) ? "Palindrone" : "Not Palindrone");
    



    return 0;
}
int isPalindronea(char str[] , int* size){
    if(*size == 2){
        if(str[0] == str[1]){
            return 0;
        }
        else{                                   //Base cases
            return 1;
        }
    }
    else if(*size ==1){
        return 0;
    }

if(str[0] == str[*size-1]){
int i=0;
while(str[i]!='\0'){         //Logic for shorting string by 2 after comparing that first and last characters are same
    if(i==*size-1){
        break;
    }
    str[i] = str[i+1];
    i++;
}str[*size-1] = '\0';
*size -=2;


isPalindronea(str,size); }          //Recursive call

else{
    return 1;
}



}