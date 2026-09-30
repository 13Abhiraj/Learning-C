#include <stdio.h>
#include <stdlib.h>
int main(){

    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    int *ptr =(int *)calloc(num,sizeof(int));

    if(ptr==NULL){
        printf("Memory Alloction Failed!!\n");
        exit(0);
    }
    printf("Enter elements of array : ");
    for(int i=0;i<num;i++){
        scanf("%d",&ptr[i]);

    }
    int max=0;
    int min=ptr[0];
    int sum=0;
    int n_even=0,n_odd=0;

    for(int j=0;j<num;j++){

        if(ptr[j]>=max){
            max=ptr[j];
        }
        if(ptr[j]<=min){
            min=ptr[j];
        }
        sum+=ptr[j];

        if(ptr[j]%2==0){
            n_even++;
        }
        else{
            n_odd++;
        }
    }

printf("The maximum value is %d\n",max);
printf("The minimum value is %d\n",min);
printf("The average is %.2f\n",(float)sum/num);
printf("No. of even numbers %d\n",n_even);
printf("No of odd numbers %d\n",n_odd);


free(ptr);
ptr=NULL;

return 0;
}