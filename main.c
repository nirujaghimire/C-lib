#include <stdio.h>
#include "string.h"

#include "fruit.h"
#include "math.h"


/**
 * f(x)=ax^2+bx+c=0
 */
float minima(float a,float b,float c){
    float x = 0.67f;
    float learning_rate = 0.1f;
    for (int i = 0; i < 1000; ++i) {
        float f_x = a*x*x+b*x+c;
        if(fabsf(f_x)<=1e-6)
            break;

        float derv = 2*a*x+b;
        x = x-learning_rate*derv;
    }
    return x;
}

int isPrime(int num){
    if(num==1||num%2==0)
        return 0;
    if(num==2)
        return 1;
    for(int i = 3; i<num; i+=2){
        if(num/i == 0)
            return 0;
    }
    return 1;
}

int noPrime(int x, int y){

}


int main() {
//    fruit_init();
//    Fruit* fruit = StaticFruit.new("name",140);
//    StaticFruit.print(fruit);

//    printf("%f", minima(1,2,-2));
    printf("%d\n", isPrime(3));

    return 0;
}

