#include <iostream>
#include <string>

using namespace std;

const int MAX_BUKU = 5;

struct Buku {
    string judul_buku;
    string pengarang;
    string penerbit;
    int tebal_buku;
    double harga_buku;
    int tahun_terbit;
};

// Fungsi untuk memasukkan data buku
void tambahData(Buku &buku) {
    cout << "Judul Buku: ";
    getline(cin, buku.judul_buku);
    cout << "Pengarang: ";
    getline(cin, buku.pengarang);
    cout << "Penerbit: ";
    getline(cin, buku.penerbit);
    cout << "Tebal Buku (halaman): ";
    cin >> buku.tebal_buku;
    cout << "Harga Buku: ";
    cin >> buku.harga_buku;
    cout << "Tahun Terbit: ";
    cin >> buku.tahun_terbit;
    cin.ignore(); // Membersihkan buffer input
}

int main() {
    Buku daftar_buku[MAX_BUKU];

    // Memasukkan data untuk setiap buku
    for (int i = 0; i < MAX_BUKU; ++i) {
        cout << "Masukkan data untuk Buku " << i + 1 << endl;
        tambahData(daftar_buku[i]);
        cout << endl;
    }

    // Menampilkan data buku yang telah dimasukkan
    cout << "Data Buku:"<<endl<<endl;
    for (int i = 0; i < MAX_BUKU; ++i) {
        cout << "Daftar Buku ke-" << i + 1 << endl;
        cout << "Judul: " << daftar_buku[i].judul_buku << endl;
        cout << "Pengarang: " << daftar_buku[i].pengarang << endl;
        cout << "Penerbit: " << daftar_buku[i].penerbit << endl;
        cout << "Tebal Buku: " << daftar_buku[i].tebal_buku << " halaman" << endl;
        cout << "Harga Buku: Rp" << daftar_buku[i].harga_buku << endl;
        cout << "Tahun Terbit: " << daftar_buku[i].tahun_terbit << endl << endl;
    }

    return 0;
}