#include "child.h"

void createList(List_c &L) { first(L) = NULL; }

address_c alokasi(infotype_c x)
{
    address_c P = new elm_c;
    info(P) = x;
    next(P) = NULL;
    parent(P) = NULL;
    return P;
}

void insertfirst(List_c &L, address_c P)
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

void deletefirst(List_c &L, address_c &P)
{
    if (first(L) != NULL)
    {
        P = first(L);
        first(L) = next(P);
        next(P) = NULL;
    }
}

void printinfo(List_c L)
{
    address_c P = first(L);
    while (P != NULL)
    {
        cout << "Nama      : " << info(P).nama << endl;
        cout << "NIM       : " << info(P).NIM << endl;
        cout << "Jurusan   : " << info(P).jurusan << endl;
        cout << "Alamat    : " << info(P).alamat << endl;
        cout << "No. Telp  : " << info(P).no_telp << endl;
        P = next(P);
    }
}

address_c findElementStudent(List_c L, infotype_c x)
{
    address_c P = first(L);
    while (P != NULL)
    {
        if (info(P).NIM == x.NIM)
        {
            return P;
        }
        P = next(P);
    }
    return NULL;
}

void findStudent(List_c L, infotype_c x)
{
    address_c P = findElementStudent(L, x);

    if (P == NULL)
    {
        cout << "Mahasiswa tidak ditemukan." << endl;
    }
    else
    {
        cout << "Data mahasiswa ditemukan ! " << endl;
        cout << "Nama       : " << info(P).nama << endl;
        cout << "NIM        : " << info(P).NIM << endl;
        cout << "Jurusan    : " << info(P).jurusan << endl;
        cout << "Alamat     : " << info(P).alamat << endl;
        cout << "No_telp    : " << info(P).no_telp << endl;
    }
}

//void TampilkanbukuTerbanyak(List_p buku, List_c mahasiswa)
//{
//    int max_count = 0;
//    address_p max_book = NULL;

    // loop through all books in the list
//    address_p P = first(buku);
//    while (P != NULL)
//    {
        // count the number of students who borrowed this book
//        int count = 0;
//        address_c Q = first(mahasiswa);
//        while (Q != NULL)
//       {
//           if (parent(Q) == P)
//            {
//                count++;
//            }
//            Q = next(Q);
//        }

        // update the most popular book if necessary
//        if (count > max_count)
//        {
//            max_count = count;
 //           max_book = P;
 //       }

 //       P = next(P);
//    }

    // display the most popular book
 //   if (max_book != NULL)
 //   {
 //       cout << "Buku paling favorit di kalangan mahasiswa: " << info(max_book).judul << endl;
 //       cout << "Jumlah mahasiswa yang meminjam: " << max_count << endl;
  //  }
 //   else
 //   {
  //      cout << "Tidak ada buku yang dipinjam oleh mahasiswa." << endl;
  //  }
//}
