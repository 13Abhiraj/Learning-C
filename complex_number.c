#include <stdio.h>
struct complex{
    float* real;         //structure for representing complex number
    float* imag;
};

void readComplex(struct complex *z){
    printf("Real part is: %f\n",(*z->real));          //Function for reading a complex
    printf("Imaginary part is: %f\n",(*z->imag));
}

struct complex* addComplex(struct complex* z1, struct complex* z2 ,struct complex* result_add){
    ;
    *((*result_add).real) = *((*z1).real) + *((*z2).real);
    *((*result_add).imag) = *((*z1).imag) + *((*z2).imag);       //Function for adding two complex number

    return result_add;
}

struct complex* multiplyComplex(struct complex* z1, struct complex* z2 , struct complex* result_mul){
                                                                   //Function for multiply two complex numbers
    *((*result_mul).real) = (*((*z1).real)) * (*((*z2).real)) - (*((*z1).imag)) * (*((*z2).imag));
    *((*result_mul).real) = (*((*z1).real)) * (*((*z2).imag)) + (*((*z1).imag)) * (*((*z2).real));

    return result_mul;
}


int main(){

//Initializing Variables for program: 

    float a = 3.0,b=4.0,c=6.0,d=8.0;
    float add_real ,add_imag ,mul_real ,mul_imag;
    struct complex z1 = {&a,&b};
    struct complex z2 = {&c,&d};
    struct complex Addition = {&add_real , &add_imag};
    struct complex Multiply = {&mul_real , &mul_imag};

    struct complex* add = addComplex(&z1 , &z2 , &Addition);
    struct complex* mul = multiplyComplex(&z1,&z2 , &Multiply);


//Reading Details: 

    printf("Addition of given Complex Numbers is ---\n");
    readComplex(add);
    printf("-------------------------------------------\n");
    printf("Multiplication of given Complex Numbers is ---\n");
    readComplex(mul);

    return 0;
}