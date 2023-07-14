#ifndef CHILD_H_INCLUDED
#define CHILD_H_INCLUDED

#include <iostream>
#include "parent.h"
using namespace std;

#define first(L) L.first
#define next(P) P->next
#define info(P) P->info
#define parent(P) P->parent

typedef struct infotype_c infotype_c;
typedef struct elm_c *address_c;

struct infotype_c
{
    string nama;
    string NIM;
    string jurusan;
    string alamat;
    string no_telp;
};

struct elm_c
{
    infotype_c info;
    address_c next;
    address_p parent;
};

struct List_c
{
    address_c first;
};

void createList(List_c &L);
address_c alokasi(infotype_c x);
void insertfirst(List_c &L, address_c P);
void deletefirst(List_c &L, address_c &P);
void printinfo(List_c L);
address_c findElementStudent(List_c L, infotype_c x);
void findStudent(List_c L, infotype_c x);
void TampilkanbukuTerbanyak(List_p L, List_c Lc);



#endif // CHILD_H_INCLUDED
