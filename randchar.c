#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM 26

char randchar(){
    char letters[NUM] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    //seeding the randomizer
    srand((unsigned)time(NULL));

    return letters[rand() % NUM];

}