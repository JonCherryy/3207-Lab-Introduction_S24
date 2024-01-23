#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NUM 26

char randchar();

char randchar(){
    char letters[NUM] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    return letters[rand() % NUM];
}