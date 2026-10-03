#include <stdio.h>
#include <stdlib.h>
int main(){

    int no;
    printf("Enter number of elements of array : ");     
    scanf("%d",&no);

    int *arr = calloc(no,4);
    if(arr==NULL){
        printf("Allocation Failed!!");                  //defining elements
        exit(1);
    }

    int n_elmt=1;


    printf("Enter numbers into array : ");
    for(int i=0;i<no;i++){
        scanf("%d",&arr[i]);                            //getting elements in array
    }

    int *arrd = calloc(1,4);
    if(arrd==NULL){
        printf("Allocation Failed!!");
        exit(1);}


    arrd[0]=arr[0];                 //First element given manually

    for(int j=1;j<no;j++){
        int count=0;
        for(int k=0;k<n_elmt;k++){
            if(arr[j]==arrd[k]){
                ++count;                                //Logic for unique elements 
            }}
            if(count==0){
                arrd = realloc(arrd,1*4);
                arrd[n_elmt]=arr[j];
                ++n_elmt;
            }
        
    }

    printf("Your Unique elements are : ");
    for(int l=0;l<n_elmt;l++){                          //printing second array contains unique elements
        printf("%d ",arrd[l]);
    }

    free(arr);                      
    arr=NULL;                       //freeing pointers
    free(arrd);
    arrd=NULL;

return 0;
}