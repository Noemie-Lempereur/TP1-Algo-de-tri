#include "tri.h"
#include <time.h>/*
void Tri_Selection(int *table, int taille){
    int c;
    for(int i=0;i<taille-1;i++){
        for(int j=i+1;j<taille;j++){
            if(table[i]>table[j]){
                c=table[i];
                table[i]=table[j];
                table[j]=c;
            }
        }
    }
}*/

void Tri_Selection(int *table, int taille){
    int c=5;
    int d;
    for(int i=0;i<taille-1;i++){
        c=i;
        for(int j=i+1;j<taille;j++){
            if(table[c]>table[j]){
                c=j;
            }
        }
        if(c!=i) {
            d = table[c];
            table[c] = table[i];
            table[i] = d;
        }
    }
}

void Tri_Insertion(int *table, int taille){
    int c;
    for(int i=0;i<taille-1;i++){
        if(table[i]>table[i+1]){
            c=table[i+1];
            for(int j=i+1;j>0;j--){
                if(table[j-1]<=c){
                    table[j]=c;
                    break;
                }
                else{
                    if(j==1){
                        table[0]=c;
                    } else{
                        table[j]=table[j-1];
                    }
                }
            }
        }
    }
}
/*
void Tri_Bulles(int* table, int taille){
    bool trie=false;
    while (trie==false){
        trie = true;
        for (int i=0;i<taille-1;i++) {
            if (table[i] > table[i + 1]) {
                int c = table[i];
                table[i] = table[i + 1];
                table[i + 1] = c;
                trie = false;
            }
        }
    }
}*//*
void Tri_Bulles(int* table, int taille){
    for (int j=0;j<=taille-2;j++) {
        for (int i=0;i<=taille-2-j;i++) {
            if (table[i] > table[i + 1]) {
                int c = table[i];
                table[i] = table[i + 1];
                table[i + 1] = c;
            }
        }
    }
}*/

void Tri_Bulles(int* table, int taille){
    bool trie=false;
    int j=0;
    while (trie==false){
        trie = true;
        for (int i=0;i<=taille-2-j;i++) {
            if (table[i] > table[i + 1]) {
                int c = table[i];
                table[i] = table[i + 1];
                table[i + 1] = c;
                trie = false;
            }
        }
        j++;
    }
}



void Tri_Rapide(int* table,int indice_min, int indice_max){
    if(indice_max-indice_min<=0){
        return;
    }
    int c;
    /*if(indice_max-indice_min==1){
        if(table[indice_min]>table[indice_max]){
            c=table[indice_min];
            table[indice_min]=table[indice_max];
            table[indice_max]=c;
        }
        return;
    }*/
    int pivot=indice_min;
    int indice_milieu=indice_min;
    for(int i=indice_min+1;i<=indice_max;i++){
        if (table[pivot] > table[i]) {
            indice_milieu++;
            c=table[i];
            table[i]=table[indice_milieu];
            table[indice_milieu]=c;
        }
    }
    c=table[pivot];
    table[pivot]=table[indice_milieu];
    table[indice_milieu]=c;
    Tri_Rapide(table, indice_min,indice_milieu-1);
    Tri_Rapide(table, indice_milieu+1, indice_max);
}

void Tri_Fusion(int* table,int taille){

}

void Tri_Tas(int* table,int taille){    //Probleme
    /*int taille_max=taille;
    for (int j=0;j<taille;j++){
        printf("%d ",table[j]);
    }*/
    int d;
    while(taille>1) {
        for (int i = 0; i < taille; i++) {
            if ((table[i] < table[2 * i + 1])&&(taille>2*i+1)) {
                d = table[i];
                table[i] = table[2 * i + 1];
                table[2 * i + 1] = d;
                i = -1;
            }
            if ((table[i] < table[2 * i + 2])&&(taille>2*i+2)) {
                d = table[i];
                table[i] = table[2 * i + 2];
                table[2 * i + 2] = d;
                i = -1;
            }
        }/*
        printf("\n");
        printf("\n");
        for (int j=0;j<taille_max;j++){
            printf("%d ",table[j]);
        }*/
        taille--;
        d=table[taille];
        table[taille]=table[0];
        table[0]=d;
        for(int i=0;i<4;i++){
            printf("%d _ ",table[i]);
        }
        printf("\n");
        /*
        printf("\n");
        for (int j=0;j<taille_max;j++){
            printf("%d ",table[j]);
        }*/
    }
}

void Slowsort(int* table,int indice_min, int indice_max){
    if (indice_min>=indice_max){
        return;
    }
    int indice_median =(indice_min+indice_max)/2;
    Slowsort(table,indice_min,indice_median);
    Slowsort(table,indice_median+1,indice_max);
    if (table[indice_max] < table[indice_median]){
        int c=table[indice_max];
        table[indice_max]=table[indice_median];
        table[indice_median]=c;
    }
    Slowsort(table,indice_min,indice_max-1);
}

void Bogosort(int* table,int taille){//MARCHE PAS
    srand (time (NULL));
    bool trie=true;
    for(int i=0;i<=taille-1;i++) {
        if (table[i] > table[i + 1]) {
            trie=false;
        }
    }
    while (trie==false) {
        int c;
        int d;
        for (int i = 0; i < taille-1; i++) {
            c = rand() % (taille+1);
            printf("%d",c);
            d = table[i];
            table[i] = table[c];
            table[c] = d;
        }
        trie=true;
        printf("\n");
        for(int i=0;i<taille-1;i++) {
            if (table[i] > table[i + 1]) {
                trie=false;
            }
        }
    }
}