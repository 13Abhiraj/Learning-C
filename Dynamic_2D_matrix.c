#include <stdio.h>
#include <stdlib.h>

void print(int **arr,int r,int c);
void s_row(int **arr,int r,int c);              //functions initialize
void s_col(int **arr,int r,int c);
void maxi(int **arr,int r,int c);


int main(){
    
    int r,c;
    int ch;
    printf("Enter rows and columns of matrix : ");                  //basic data input
    scanf("%d %d",&r,&c);

    int **arr = calloc(r,sizeof(int *));                    //allocating memory for our matrix dynamically
    for(int p=0;p<r;p++){
        arr[p]=calloc(c,sizeof(int));
    }

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("Enter [%d][%d] element : ",i,j);            //input matrix
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nInput Done!!\n");

    printf("\n1 : Print Matrix\n2 : Sum of each row\n3 : Sum of each column\n4 : Largest element With its index\n5 : Exit\n");
    printf("Enter Choise : ");
    scanf("%d",&ch);                            //getiing user choice to continue what to perform


    while (ch!=5){

        switch (ch)
        {
        case 1:
            print(arr,r,c);
            break;
        
        case 2:
            s_row(arr,r,c);                             //switch block for diffrent choices
            break;

        case 3:
            s_col(arr,r,c);
            break;

        case 4:
            maxi(arr,r,c);
            break;
        
        default:
        printf("Wrong Choice!!\n");
            break;
        }
        printf("\n1 : Print Matrix\n2 : Sum of each row\n3 : Sum of each column\n4 : Largest element With its index\n5 : Exit\n");
        printf("Enter Choise : ");
    scanf("%d",&ch);                                        //again getiing user choice to continue what to perform
    }

    
    printf("Program Exited!!\n");
    for(int k=0;k<r;k++){
        free(arr[k]);
        arr[k]=NULL;                                                //freeing memory
    }free(arr);
    arr = NULL;        
    

return 0;
}

void print(int **arr,int r,int c){                  //functions defined here for diffrent operations on matrix
    for(int p =0;p<r;p++){
        for(int q =0;q<c;q++){
            printf("%d ",arr[p][q]);
        }printf("\n");
    }
}


void s_row(int **arr,int r,int c){
    int count;
    for(int p =0;p<r;p++){
        count=0;
        for(int q=0;q<c;q++){
            count+=arr[p][q];
        }printf("Sum of %d row : %d\n",p+1,count);

    }
}

void maxi(int **arr,int r,int c){
    int max;
    int x,y;
    max = arr[0][0];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]>max){
                max=arr[i][j];
                x=i;
                y=j;
            }
            else{
                continue;
            }
        }
    }
    printf("The maximum element is %d with index [%d][%d]\n",max,x,y);

}

void s_col(int **arr,int r,int c){
    
    for(int i=0;i<c;i++) {
        int sum=0;
        for(int j=0;j<r;j++){
            sum+=arr[j][i];

        }printf("The sum of %d column is %d\n",i+1,sum);
    }
}