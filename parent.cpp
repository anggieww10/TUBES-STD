#include "parent.h"
#include "child.h"

void createList(List_p &L)
{
    first(L) = NULL;
}

address_p alokasi(infotype_p x)
{
    address_p P = new elm_p;
    info(P) = x;
    next(P) = NULL;
    return P;
}

void insertfirst(List_p &L, address_p P)
{
    if (first(L) == NULL)
    {
        first(L) = P;
    }
    else
    {
        next(P) = first(L);
        first(L) = P;
    }
}

void deletefirst(List_p &L, address_p &P)
{
    if (first(L) != NULL)
    {
        P = first(L);
        first(L) = next(P);
        next(P) = NULL;
    }
}

void printinfo(List_p L)
{
    address_p P = first(L);
    while (P != NULL)
    {
        cout << "Judul Buku : "<<info(P).judul << endl;
        P = next(P);
    }
}

address_p findElementBuku(List_p L, infotype_p x)
{
    address_p P = first(L);
    while (P != NULL)
    {
        if (info(P).judul == x.judul)
        {
            return P;
        }
        P = next(P);
    }
    return NULL;
}

void TampilkanbukuTerbanyak(List_p buku, List_c mahasiswa)
{
    int max_count = 0;
    address_p max_book = NULL;

    // loop through all books in the list
    address_p P = first(buku);
    while (P != NULL)
    {
        // count the number of students who borrowed this book
        int count = 0;
        address_c Q = first(mahasiswa);
        while (Q != NULL)
        {
            if (parent(Q) == P)
            {
                count++;
            }
            Q = next(Q);
        }

        // update the most popular book if necessary
        if (count > max_count)
        {
            max_count = count;
            max_book = P;
        }

        P = next(P);
    }

    // display the most popular book
    if (max_book != NULL)
    {
        cout << "Buku paling favorit di kalangan mahasiswa: " << info(max_book).judul << endl;
        cout << "Jumlah mahasiswa yang meminjam: " << max_count << endl;
    }
    else
    {
        cout << "Tidak ada buku yang dipinjam oleh mahasiswa." << endl;
    }
}


