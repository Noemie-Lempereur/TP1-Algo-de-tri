#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#ifndef UNTITLED5_TRI_H
#define UNTITLED5_TRI_H

void Tri_Selection(int *table, int taille);
void Tri_Insertion(int *table, int taille);
void Tri_Bulles(int *table, int taille);
void Tri_Rapide(int* table,int indice_min, int indice_max);
void Tri_Fusion(int* table,int taille);
void Tri_Tas(int* table, int taille);
void Slowsort(int* table,int indice_min, int indice_max);
void Bogosort(int* table,int taille);
#endif //UNTITLED5_TRI_H
