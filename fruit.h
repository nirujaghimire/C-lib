//
// Created by NIRUJA on 6/2/2023.
//

#ifndef C_LIB_FRUIT_H
#define C_LIB_FRUIT_H

typedef struct{
    char *name;
    float price;
}Fruit;

struct StaticFruitStruct{
    Fruit* (*new)(const char name[],float price);
    void (*print)(Fruit* fruit);
};


extern struct StaticFruitStruct StaticFruit;
void fruit_init();
//Fruit* fruit_new(const char name[],float price);
//void fruit_print(Fruit* fruit);



#endif //C_LIB_FRUIT_H
