#include "child.h"
#include "parent.h"
#include "relasi.h"
#include <iostream>

using namespace std;
// List Buku
List_p buku;
// List Mahasiswa
List_c mahasiswa;

int main()
{
    // Buku
    address_p P;
    infotype_p x;
    createList(buku);

    // Buku
    cout << "=========== [JUDUL BUKU] ============\n" << endl;
    x.judul = "Pengenalan Pemograman";
    P = alokasi(x);
    insertfirst(buku, P);
    x.judul = "Kalkulus Menyenangkan";
    P = alokasi(x);
    insertfirst(buku, P);
    x.judul = "ALGORITMA PEMOGRAMAN";
    P = alokasi(x);
    insertfirst(buku, P);
    x.judul = "STRUKTUR DATA";
    P = alokasi(x);
    insertfirst(buku, P);

    printinfo(buku);

    // Mahasiswa
    cout << "\n========== [DATA PEMINJAM BUKU] ========== \n" << endl;
    infotype_c y;
    y.nama = "ADISAPUTRA NUR RACHMAN";
    y.NIM = "1311009721";
    y.jurusan = "S1 ELEKTRO";
    y.alamat = "CIKONENG";
    y.no_telp = "086723515621\n";

    infotype_c z;
    z.nama = "ANDIKA PRATAMA";
    z.NIM = "1308786512";
    z.jurusan = "D3 TEKNIK INFORMATIKA";
    z.alamat = "GANG PGA";
    z.no_telp = "082123144777\n";

    infotype_c w;
    w.nama = "MUHAMMAD RIZKY";
    w.NIM = "1399001277";
    w.jurusan = "S1 INFORMATIKA";
    w.alamat = "SUKABIRUS";
    w.no_telp = "082122448199\n";

    infotype_c v;
    v.nama = "ANGELO TANJUNG";
    v.NIM = "1301211231";
    v.jurusan = "S1 INFORMATIKA";
    v.alamat = "JLN MALAKA";
    v.no_telp = "081312244512\n";

    infotype_c u;
    u.nama = "DAVID BECKHAM";
    u.NIM = "1301211232";
    u.jurusan = "S1 EKONOMI";
    u.alamat = "JLN. KEBON JERUK";
    u.no_telp = "082122412347\n";

    infotype_c t;
    t.nama = "YUSUF KIBRIYANTO";
    t.NIM = "1301211233";
    t.jurusan = "S1 ELERKTRO";
    t.alamat = "JLN. KABARAN";
    t.no_telp = "082122412010\n";

    infotype_c s;
    s.nama = "MUHAMMAD ROFIQ";
    s.NIM = "1301211234";
    s.jurusan = "D3 REKAYASA PERANGKAT LUNAK";
    s.alamat = "SUKABIRUS";
    s.no_telp = "082122412599\n";

    infotype_c r;
    r.nama = "FEBY TAMARA";
    r.NIM = "1301211235";
    r.jurusan = "S1 TEKNOLOGI INFORMASI";
    r.alamat = "JLN. SUDIRMAN";
    r.no_telp = "088100412777\n";

    createList(mahasiswa);
    //addres_c digunakanan untuk menampung data mahasiswa
    address_c Q = alokasi(y);
    address_c R = alokasi(z);
    address_c S = alokasi(w);
    address_c T = alokasi(v);
    address_c U = alokasi(u);
    address_c V = alokasi(t);
    address_c W = alokasi(s);
    address_c X = alokasi(r);

    //insertfirst digunakan untuk memasukan data mahasiswa ke dalam list mahasiswa
    insertfirst(mahasiswa, R);
    insertfirst(mahasiswa, Q);
    insertfirst(mahasiswa, S);
    insertfirst(mahasiswa, T);
    insertfirst(mahasiswa, U);
    insertfirst(mahasiswa, V);
    insertfirst(mahasiswa, W);
    insertfirst(mahasiswa, X);


    printinfo(mahasiswa);

    cout << "========= [MENAMPILKAN DATA SALAH SATU PEMINJAM BUKU] ========== \n"
         << endl;
    // MENAMPILKAN DATA SALAH SATU PEMINJAM BUKU
    infotype_c mhs;
    mhs.NIM = "1301211231"; // NIM mahasiswa yang dicari
    findStudent(mahasiswa, mhs);


    // MENAMPILKAN DATA BUKU YANG DIPINJAM
    cout << "========= [MENAMPILKAN DATA BUKU YANG DIPINJAM] ========== " << endl;
    x.judul = "Pengenalan Pemograman";
    P = findElementBuku(buku, x);
    Q = findElementStudent(mahasiswa, y);
    R = findElementStudent(mahasiswa, z);

    connect(P, Q);
    connect(P, R);

    x.judul = "STRUKTUR DATA";
    P = findElementBuku(buku, x);
    Q = findElementStudent(mahasiswa, u);
    R = findElementStudent(mahasiswa, r);

    connect(P, Q);
    connect(P, R);

    x.judul = "ALGORITMA PEMOGRAMAN";
    P = findElementBuku(buku, x);
    Q = findElementStudent(mahasiswa, w);
    R = findElementStudent(mahasiswa, v);
    S = findElementStudent(mahasiswa, s);

    connect(P, Q);
    connect(P, R);
    connect(P, S);

    x.judul = "Kalkulus Menyenangkan";
    P = findElementBuku(buku, x);
    Q = findElementStudent(mahasiswa, t);

    connect(P, Q);

    printRelasi(buku, mahasiswa);


    //menampilkan data mahasiswa yang meminjam buku
    cout << "\n======== [MENAMPILKAN DATA MAHASISWA YANG MEMINJAM BUKU] ========== "
         << endl;
    printRelasiChild(mahasiswa);

    //disini saya mencoba untuk menghapus salah satu relasi
   // cout << "======== [MENGHAPUS SALAH SATU DATA MAHASISWA DARI RELASI BUKU] ========== "
     //    << endl;






   //menghapus relasi buku dan mahasiswa
   cout << "======== MENGHAPUS RELASI BUKU DAN MAHASISWA ========== "
         << endl;
   deletefirst(mahasiswa, Q);
   printRelasi(buku, mahasiswa);
   cout << "\n======== [MENAMPILKAN SEMUA DATA MAHASISWA YANG MEMINJAM BUKU] ========== "
         << endl;
   printRelasiChild(mahasiswa);

   //buku terbanyak dipinjam oleh mahasiswa
  // cout << "======== BUKU TERBANYAK DIPINJAM OLEH MAHASISWA ========== "
    //     << endl;
    //Menampilkan buku terbanyak dipinjam oleh mahasiswa
 //   cout << "Buku yang paling banyak dipinjam oleh mahasiswa adalah : " << endl;
//    TampilkanbukuTerbanyak(mahasiswa);



    cout << " ================ PROGRAM SELESAI ================= " <<endl;




    return 0;
}
