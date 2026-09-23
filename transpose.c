#include <stdio.h>
int main(){
    int r,c;
    printf("Enter rows and columns : ");
    scanf("%d %d",&r,&c);
    int arr[20][20];

    for(int i =0; i<r;i++){
        for(int j=0;j<c;j++){

            printf("Enter [%d][%d] element : ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
printf("Your Matrix is : \n");
for(int i =0; i<r;i++){
        for(int j=0;j<c;j++){

            printf("%d ",arr[i][j]);
            
        }printf("\n");
    }

printf("Transpose is : \n");

for(int i =0; i<c;i++){
        for(int j=0;j<r;j++){

            printf("%d ",arr[j][i]);
            
        }printf("\n");
    }



}