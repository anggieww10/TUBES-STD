#ifndef PARENT_H_INCLUDED
#define PARENT_H_INCLUDED

#include <iostream>
using namespace std;

#define first(L) L.first
#define next(P) P->next
#define info(P) P->info

typedef struct infotype_p infotype_p;
typedef struct elm_p *address_p;

struct infotype_p
{
    string judul;
};

struct elm_p
{
    infotype_p info;
    address_p next;
};

struct List_p
{
    address_p first;
};

void createList(List_p &L);
address_p alokasi(infotype_p x);
void insertfirst(List_p &L, address_p P);
void deletefirst(List_p &L, address_p &P);
void printinfo(List_p L);
address_p findElementBuku(List_p L, infotype_p x);
//void TampilkanbukuTerbanyak(List_p L, List_c Lc);

#endif // PARENT_H_INCLUDED

