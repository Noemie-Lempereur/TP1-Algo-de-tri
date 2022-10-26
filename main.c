#include <stdio.h>
#include "tri.h"

int main() {

    int table[23]={4,3,2,1,0,4,2,44,90,34,33,5,-8,5,493,43,49,67,98,678,54,-78};
    for(int i=0;i<23;i++){
        printf("%d _ ",table[i]);
    }
    printf("\n");
    Tri_Bulles(table,5);
    for(int i=0;i<23;i++){
        printf("%d _ ",table[i]);
    }/*
    printf("\n");
    Tri_Bulles(table,23);
    for(int i=0;i<23;i++){
        printf("%d _ ",table[i]);
    }*/
    printf("\n");
    int table2[23]={1,10,9,7,-4,-2,44,90,34,33,5,-8,5,493,43,49,67,98,6778,54,-78,89,6};
    /*Tri_Selection(table2,23);
    for(int i=0;i<23;i++){
        printf("%d _ ",table2[i]);
    }*/
    //Slowsort(table,0,12);
    //Bogosort(table,13);

    printf("ok");
    return 0;
}

