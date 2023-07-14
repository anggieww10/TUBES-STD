#include "relasi.h"

void connect(address_p P, address_c &C)
{
    if (P != NULL && C != NULL)
    {
        parent(C) = P;
    }
}

//void disconnect(address_c &C)
//{
//    if (C != NULL)
 //   {
//        parent(C) = NULL;
//    }
//}

void printRelasi(List_p Lp, List_c Lc)
{
    address_p P = first(Lp);
    address_c C = first(Lc);
    P = first(Lp);
    while (P != NULL)
    {
        cout << "\nJudul Buku   : " << info(P).judul << endl;
        cout << "Nama Peminjam  : " << endl;
        C = first(Lc);
        while (C != NULL)
        {
            if (parent(C) == P)
            {
                cout << "\n- "<<info(C).nama;
            }
            C = next(C);
        }
        cout << endl;
        P = next(P);
    }
}

void printRelasiChild(List_c Lc)
{
    address_c C = first(Lc);

    while (C != NULL)
    {
        cout << "Nama          : " << info(C).nama;
        if (parent(C) != NULL)
        {
            cout << "\nMeminjam Buku : " << info(parent(C)).judul << endl;
        }
        cout << endl;
        C = next(C);
    }
    cout << endl
         << endl;
}
