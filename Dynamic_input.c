#include <stdio.h>
#include <stdlib.h>
int main(){
    int *arr=(int *)calloc(5,4);
    if(arr==NULL){
        printf("Allocation Failed!!\n");
        exit(0);
    }


    int count=0;
    int i=0;
    int n=0;

    
while(arr[i-1]!=-1){
    printf("Enter value : ");
    scanf("%d",&arr[i]);
    n++;
    i++;

    if(i%5==0&&arr[i-1]!=-1){
        
        count+=5;
        arr=(int *)realloc(arr,(5+count)*4);
}
}
    for(int j=0;j<n-1;j++){

        printf("%d ",arr[j]);
    }

    free(arr);
    arr=NULL;
    
    return 0;
}