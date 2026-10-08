#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){


    int s1,s2;
    printf("Enter size of first sorted array : ");
    scanf("%d",&s1);
    int *arr1 = calloc(s1,4);

    //inputting first sorted array
    printf("Inputting first sorted array--\n");

    for(int i=0;i<s1;i++){
        printf("Enter %d element : ",i+1);
        scanf("%d",&arr1[i]);
    }


    //Inputting second sorted array
    printf("Enter size of second sorted array : ");
    scanf("%d",&s2);
    int *arr2 = calloc(s2,4);

    //inputting second sorted array
    printf("Inputting second sorted array--\n");

    for(int j=0;j<s2;j++){
        printf("Enter %d element : ",j+1);
        scanf("%d",&arr2[j]);
    }

    //Input Done!!

    int *arr_fnl = calloc(s1+s2,4);

    int p=0,q=0,r=0;

    while(p<s1||q<s2){
        if(p==s1 || q==s2){
        if(p==s1){
            arr_fnl[r] = arr2[q];
            ++q;
            ++r;
        }

        if(q==s2&&p<s1){
            arr_fnl[r] = arr1[p];
            ++p;
            ++r;
        }}

        else{

        if(arr1[p]<arr2[q]){
            arr_fnl[r] = arr1[p];
            ++r;
            ++p;
        }
        else if(arr1[p]>arr2[q]){
            arr_fnl[r] = arr2[q];
            ++r;
            ++q;
        }
        else{
            arr_fnl[r] = arr1[p];
            ++r;
            ++p;
            arr_fnl[r] = arr2[q];
            ++r;
            ++q;
        }}
    }


    printf("Your final sorted array is --\n");
    for(int l=0;l<s1+s2;l++){
        printf("%d ",arr_fnl[l]);
    }


    //freeeing memory
    free(arr1);
    arr1 = NULL;
    free(arr2);
    arr2 = NULL;
    free(arr_fnl);
    arr_fnl = NULL;

}