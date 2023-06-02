//
// Created by NIRUJA on 6/2/2023.
//


#include "fruit.h"
#include "stdlib.h"
#include "string.h"
#include "stdio.h"

Fruit* new(const char name[],float price){
    Fruit* fruit = malloc(sizeof(Fruit));
    fruit->name = malloc(strlen(name));
    strcpy(fruit->name,name);
    fruit->price = price;
    return fruit;
}

void print(Fruit* fruit){
    printf("Fruit \n");
    printf("\tname : %s \n",fruit->name);
    printf("\tprice : %f \n",fruit->price);
}


struct StaticFruitStruct StaticFruit;
void fruit_init(){
    StaticFruit.new = new;
    StaticFruit.print = print;
}