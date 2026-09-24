#include <stdio.h>
#include <string.h>

void max(struct std rec[],int n);
void avg(struct std rec[],int n);
int search(struct std rec[],int n);

struct std{
    char name[50];
    int roll;
    int age;
    float marks;
};

int main(){
    int n;
    printf("Enter no. of students record to be add : ");
    scanf("%d",&n);

    struct std rec[100];
    printf("-----Enter Student details-----\n");
    for(int i=0;i<n;i++){
        printf("---Enter %d student details---\n",i+1);
        printf("Name : ");
        getchar();
        scanf("%s",rec[i].name);
        printf("Roll no. : ");
        scanf("%d",&rec[i].roll);
        printf("Age : ");
        scanf(" %d",&rec[i].age);
        printf("Marks : ");
        scanf("%f",&rec[i].marks);

        //records Input done..
    }


int ch;
printf("\n1 : Find Highest marks\n2 : Find Average marks\n3 : Search student record\n4 : Exit\nEnter your response : ");
scanf("%d",&ch);

//Got user choice..

while(ch != 4){
    switch (ch)
    {
    case 1:
        max(rec,n);
        break;

    case 2:
        avg(rec,n);
        break;

    case 3:
        search(rec,n);
        break;

    default:
        printf("Invalid Choice!!\nPlease choose a valid option \n");
        break;
    }

    printf("\n1 : Find highest marks\n2 : Find average marks\n3 : Search student record\n4 : Exit\nEnter your response : ");
    scanf("%d",&ch);


}printf("-----Program Exit!!-----");
return 0;
}

void max(struct std rec[],int n){
    int max =0;
    for(int i =0;i<n;i++){
        if(rec[i].marks>=max){
            max = rec[i].marks;
        }
    }
    printf("\n***Highest marks is %d***\n",max);
}


void avg(struct std rec[],int n){
    float avg=0;
    for(int j =0;j<n;j++){
        
            avg += rec[j].marks;
        }avg = avg/n;
    printf("\n***Average marks is %.2f***\n",avg);
}

int search(struct std rec[],int n){
    int opt;
    printf("\n1 : Roll no.\n2 : Name\nEnter search Basis : ");
    scanf("%d",&opt);
    
    switch (opt){
        case 1:
            int r;
            printf("Enter Roll no. to search : ");
            scanf("%d",&r);

            
            for(int k =0;k<n;k++){
                if(r == rec[k].roll){
                    printf("****STUDENT FOUND***\n");
                    printf("Name : %s\nRoll : %d\nAge : %d\nMarks : %.2f\n",rec[k].name,rec[k].roll,rec[k].age,rec[k].marks);
                    return 0;
                }
                else{
                    continue ;
                }

            }printf("Student Not Found!!\n");
            return 0;
            break;


            case 2:
            char na[50];
            printf("Enter Name to search : ");
            getchar();
            scanf("%s",na);

            
            for(int l =0;l<n;l++){
                if(strcmp(na,rec[l].name)==0){
                    printf("***STUDENT FOUND***");
                    printf("Name : %s\nRoll : %d\nAge : %d\nMarks : %.2f\n",rec[l].name,rec[l].roll,rec[l].age,rec[l].marks);
                    return 0;
                }
                else{
                    continue ;
                }

            }printf("Student Not Found!!\n");
            return 0;
            break;

            case 3:
                printf("wrong choice!!");
                break;
                return 0;
} return 0;
}