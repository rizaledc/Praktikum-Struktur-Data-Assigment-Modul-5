# <h1 align="center">Laporan Praktikum Modul Struct dan Implementasi</h1>
<p align="center">Rizal Wahyu Pratama</p>
<p align="center">2311110029</p>
<p align="center">S1SD-04-B</p>

## Tujuan Praktikum

1. Mahasiswa mampu menjelaskan konsep struktur (struct) 
2. Mahasiswa mampu menerapkan struct kedalam pemrograman 
3. Mahasiswa mampu menerapkan array pada struct

## Dasar Teori

Mata kuliah algoritma dan struktur data merupakan salah satu mata kuliah yang diajarkan pada banyak program studi ilmu komputer dan data [2]. Struktur dari data cukup abstrak sehingga cukup sulit untuk dipahami oleh manusia, oleh karena itu kita dapat mengoperasikannya dalam sebuah pemrograman komputer. Untuk mengoperasikannya di dalam komputer, kita harus memahami apa itu algoritma dan struktur atau struct. 

Pemrograman adalah komponen-komponen yang berkaitan dalam proses pembuatan program, misalnya seperti langkah, bahasa, tahapan pembuatan [1]. Dalam konteks pemrograman, struct merupakan tipe data bentukan yang terdiri dari beberapa tipe data standar atau tipe dengan bentuk lainnya. Untuk mendeklarasikan struktur kita dapat menggunakan berbagai bahasa pemrograman, seperti C++. Dimana bahasa pemrograman C++ ini merupakan hybrid dari bahasa C [3]. Untuk menggunakan struct kita dapat menggunakan berbagai kode diantaranya:

```C++
//Contoh Struct 1

struct {   
string namaDepan;  
string namaBelakang; 
int usia; 
char jenis_kelamin; 
}namaVariabelStrukA, namaVariabelStrukB;

````


```C++
//Contoh Struct 2

struct namaTipe{ 
string namaDepan; 
string namaTengah; 
string namaBelakang; 
}; struct namaTipe namaVariabelStrukA, namaVariabelStrukB;
```


```C++
//Contoh Struct 3

typedef struct { 
string namaDepan; 
string namaTengah; 
string namaBelakang; 
}namaTipe; 
namaTipe namaVariabelStrukA, namaVariabelStrukB; 
```

Dari ketiga contoh struct di atas, kita dapat memilihnya salah satu sesuai dengan kebutuhan, kondisi, serta studi kasus.

## Guided 

### 1. Guided 1

#### Buatlah sebuah struktur dengan nama buku yang berisi judul_buku, pengarang, penerbit, tebal_halaman, harga_buku. Isi dengan nilai kemudian tampilkan.

```C++
#include <iostream>
#include <string>

using namespace std;

struct Buku {
string judul_buku;
string pengarang;
string penerbit;
int tebal_buku;
double harga_buku;
}; Buku buku1, buku2;

int main(){ //fungsi program utama
    buku1.judul_buku = "Cinta Berliku, Hingga Bertemu Kamu";
	buku1.pengarang = "Rizal Wahyu";
	buku1.penerbit = "Sinar Budi";
	buku1.tebal_buku = 515;
	buku1.harga_buku = 150000;
	
	buku2.judul_buku = "Perjalanan Seorang Starboy";
	buku2.pengarang = "Pratama Rizal";
	buku2.penerbit = "PLH Entertain";
	buku2.tebal_buku = 276;
	buku2.harga_buku = 200000;
	
	//menampilkan data 
	cout << "Informasi Buku 1\n" << endl;
	cout << "Informasi Buku 1" << endl;
	cout << "Judul : "<< buku1.judul_buku << endl;
	cout << "Pengarang : "<< buku1.pengarang << endl;
	cout << "Penerbit : "<< buku1.penerbit << endl;
	cout << "tebal_buku : "<< buku1.tebal_buku << endl;
	cout << "harga_buku : "<< buku1.harga_buku << endl;

	//menampilkan data
	cout << "Informasi Buku 2\n" << endl;
	cout << "Judul : "<< buku2.judul_buku << endl;
	cout << "Pengarang : "<< buku2.pengarang << endl;
	cout << "Penerbit : "<< buku2.penerbit << endl;
	cout << "tebal_buku : "<< buku2.tebal_buku << endl;
	cout << "harga_buku : "<< buku2.harga_buku << endl;
	
	return 0;
	}
```

**Penjelasan:**

#### Bagian 1

```C++
#include <iostream>
using namespace std;
```

Library iostream digunakan untuk menjalankan operasi input dan output pada program. Library string digunakan untuk pengolahan serta manipulasi data string dalam program. Lalu namespace std dipanggil agar saat penulisan fungsi tidak perlu ditambahkan std lagi.

#### Bagian 2

```C++
struct Buku {
    string judul_buku;
    string pengarang;
    string penerbit;
    int tebal_buku;
    double harga_buku;
};Buku buku1, buku2;
```

Kode di atas digunakan untuk mendeklarasikan struct, dimana struct dengan nama buku memiliki 5 bagian dengan tipe data yang berbeda-beda.

#### Bagian 3

```C++
int main() {
buku1.judul_buku = "Cinta Berliku, Hingga Bertemu Kamu";
buku1.pengarang = "Rizal Wahyu";
buku1.penerbit = "Sinar Budi";
buku1.tebal_buku = 515;
buku1.harga_buku = 150000;

buku2.judul_buku = "Perjalanan Seorang Starboy";
buku2.pengarang = "Pratama Rizal";
buku2.penerbit = "PLH Entertain";
buku2.tebal_buku = 276;
buku2.harga_buku = 200000;

cout << "Informasi Buku 1\n" << endl;
cout << "Informasi Buku 1" << endl;
cout << "Judul : "<< buku1.judul_buku << endl;
cout << "Pengarang : "<< buku1.pengarang << endl;
cout << "Penerbit : "<< buku1.penerbit << endl;
cout << "tebal_buku : "<< buku1.tebal_buku << endl;
cout << "harga_buku : "<< buku1.harga_buku << endl;

// Outputting data for buku2
cout << "Informasi Buku 2\n" << endl;
cout << "Judul : "<< buku2.judul_buku << endl;
cout << "Pengarang : "<< buku2.pengarang << endl;
cout << "Penerbit : "<< buku2.penerbit << endl;
cout << "tebal_buku : "<< buku2.tebal_buku << endl;
cout << "harga_buku : "<< buku2.harga_buku << endl;

    return 0;
}
```

Kode di atas merupakan kode fungsi main yang merupakan fungsi utama dalam sebuah program. Fungsi ini akan dieksekusi pertama serta terurut sesuai dengan perintahnya. Pertama seorang programer akan mendeklarasikan serta mengisi masing-masing variabel dengan valuenya, lalu setelah diberi value. Programer dapat mencetak hasilnya sesuai dengan kode di atas.

#### Output :

```C++
Informasi Buku 1
Judul : Cinta Berliku, Hingga Bertemu Kamu
Pengarang : Rizal Wahyu
Penerbit : Sinar Budi
tebal_buku : 515
harga_buku : 150000
Informasi Buku 2

Judul : Perjalanan Seorang Starboy
Pengarang : Pratama Rizal
Penerbit : PLH Entertain
tebal_buku : 276
harga_buku : 200000
```

**Penjelasan:**

Program di atas akan mengeluarkan output pesan yang menyatakan informasi dari buku 1 dan buku 2. Mulai dari judul, pengarang, penerbit, tebal buku, dan harga buku.

#### Full Code Screenshot

<p align="center">
  <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assigment-Modul-5/blob/main/Modul%205/SS/codeguided1.png" alt="Alt Text">
</p>

#### Screenshot Output

<p align="center">
  <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assigment-Modul-5/blob/main/Modul%205/SS/OutG1.png" alt="Alt Text">
</p>

### 2. Guided 2

#### Buatlah sebuah struktur dengan skema seperti dibawah, isi dengan nilai kemudian jalankan. 

```C++
#include <iostream>
#include <string>
using namespace std;

struct hewan {
    string nama_hewan;
    string jenis_kelamin;
    string kembangbiak;
    string pernafasan;
    string tempat_hidup;
    bool karnivora;
}; 

struct hewan_darat{
    hewan info_hewan;
    int jumlah_kaki;
    bool apakah_menyusui;
    string suara;
};
hewan_darat hewan1;

struct hewan_laut{
    hewan info_hewan;
    string bentuk_sirip;
    string pertahanan_diri;
};
hewan_laut hewan2;

int main() {
    hewan1.info_hewan.nama_hewan = "Anjing";
    hewan1.info_hewan.jenis_kelamin = "Laki-laki";
    hewan1.info_hewan.kembangbiak = "Melahirkan";
    hewan1.info_hewan.pernafasan = "Paru paru";
    hewan1.info_hewan.tempat_hidup = "Darat";
    hewan1.info_hewan.karnivora = true;
    hewan1.jumlah_kaki = 4;
    hewan1.apakah_menyusui = true;   
    hewan1.suara = "Rawrr, guk, guk,guk";
    
    hewan2.info_hewan.nama_hewan = "Paus";
    hewan2.info_hewan.jenis_kelamin = "Perempuan";
    hewan2.info_hewan.kembangbiak = "Melahirkan";
    hewan2.info_hewan.pernafasan = "paru paru";
    hewan2.info_hewan.tempat_hidup = "Perairan (Laut)";
    hewan2.info_hewan.karnivora = false;
    hewan2.bentuk_sirip = "dosal, sabit, dan gumpalan";
    hewan2.pertahanan_diri = " Menghirup Oksigen di udara";   

	//menampilkan data 
	cout << "\t Hewan Darat" << endl;
	cout << "Nama Hewan :" <<hewan1.info_hewan.nama_hewan << endl;
	cout << "Jenis Kelamin : "<<hewan1.info_hewan.jenis_kelamin << endl;
	cout << "Kembangbiak : "<< hewan1.info_hewan.kembangbiak << endl;
	cout << "Pernapasan : "<< hewan1.info_hewan.pernafasan << endl;
	cout << "Tempat Hidup : "<< hewan1.info_hewan.tempat_hidup << endl;
	cout << "karnivora : "<< hewan1.info_hewan.karnivora << endl;
	cout << "jumlah kaki : "<< hewan1.jumlah_kaki << endl;
	cout << "apakah menyusui?  : "<< hewan1.apakah_menyusui << endl;
	cout << "suara : "<< hewan1.suara << "\n" << endl ;

	//menampilkan data 
	cout << "\t Hewan Laut" << endl;
	cout << "Nama Hewan :" <<hewan2.info_hewan.nama_hewan << endl;
	cout << "Jenis Kelamin : "<<hewan2.info_hewan.jenis_kelamin << endl;
	cout << "Kembangbiak : "<< hewan2.info_hewan.kembangbiak << endl;
	cout << "Pernapasan : "<< hewan2.info_hewan.pernafasan << endl;
	cout << "Tempat Hidup : "<< hewan2.info_hewan.tempat_hidup << endl;
	cout << "apakah karnivora? "<< hewan2.info_hewan.karnivora << endl;
	cout << "bentuk sirip : "<< hewan2.bentuk_sirip << endl;
	cout << "pertahanan diri : "<< hewan2.pertahanan_diri << endl;


	return 0;
	}
```

**Penjelasan:**

#### Bagian 1

```C++
#include <iostream>
#include <string>

using namespace std;
```

Library iostream digunakan untuk menjalankan operasi input dan output pada program. Library string digunakan untuk memanipulasi dan mengolah data string. Lalu namespace std dipanggil agar saat penulisan fungsi tidak perlu ditambahkan std lagi.

#### Bagian 2

```C++
struct hewan {
    string nama_hewan;
    string jenis_kelamin;
    string kembangbiak;
    string pernafasan;
    string tempat_hidup;
    bool karnivora;
}; 

struct hewan_darat{
    hewan info_hewan;
    int jumlah_kaki;
    bool apakah_menyusui;
    string suara;
};
hewan_darat hewan1;

struct hewan_laut{
    hewan info_hewan;
    string bentuk_sirip;
    string pertahanan_diri;
};
hewan_laut hewan2;
```

Pada kode di atas, didefinisikan 3 buah struct. Dimana struct yang pertama yaitu struct hewan yang merupakan struct inti dari dua struct setelahnya. Di dalam struct ini didefinisikan 5 variabel yang akan diisi dengan valuenya masing-masing. Berikutnya terdapat 2 struct turunan dari struct hewan yaitu struct hewan_darat dan struct hewan_laut sebagai tambahan informasi dari masing-masing jenis hewan.

#### Bagian 3

```C++
int main() {
    hewan1.info_hewan.nama_hewan = "Anjing";
    hewan1.info_hewan.jenis_kelamin = "Laki-laki";
    hewan1.info_hewan.kembangbiak = "Melahirkan";
    hewan1.info_hewan.pernafasan = "Paru paru";
    hewan1.info_hewan.tempat_hidup = "Darat";
    hewan1.info_hewan.karnivora = true;
    hewan1.jumlah_kaki = 4;
    hewan1.apakah_menyusui = true;   
    hewan1.suara = "Rawrr, guk, guk,guk";
    
    hewan2.info_hewan.nama_hewan = "Paus";
    hewan2.info_hewan.jenis_kelamin = "Perempuan";
    hewan2.info_hewan.kembangbiak = "Melahirkan";
    hewan2.info_hewan.pernafasan = "paru paru";
    hewan2.info_hewan.tempat_hidup = "Perairan (Laut)";
    hewan2.info_hewan.karnivora = false;
    hewan2.bentuk_sirip = "dosal, sabit, dan gumpalan";
    hewan2.pertahanan_diri = " Menghirup Oksigen di udara";   

	//menampilkan data 
	cout << "\t Hewan Darat" << endl;
	cout << "Nama Hewan :" <<hewan1.info_hewan.nama_hewan << endl;
	cout << "Jenis Kelamin : "<<hewan1.info_hewan.jenis_kelamin << endl;
	cout << "Kembangbiak : "<< hewan1.info_hewan.kembangbiak << endl;
	cout << "Pernapasan : "<< hewan1.info_hewan.pernafasan << endl;
	cout << "Tempat Hidup : "<< hewan1.info_hewan.tempat_hidup << endl;
	cout << "karnivora : "<< hewan1.info_hewan.karnivora << endl;
	cout << "jumlah kaki : "<< hewan1.jumlah_kaki << endl;
	cout << "apakah menyusui?  : "<< hewan1.apakah_menyusui << endl;
	cout << "suara : "<< hewan1.suara << "\n" << endl ;

	//menampilkan data 
	cout << "\t Hewan Laut" << endl;
	cout << "Nama Hewan :" <<hewan2.info_hewan.nama_hewan << endl;
	cout << "Jenis Kelamin : "<<hewan2.info_hewan.jenis_kelamin << endl;
	cout << "Kembangbiak : "<< hewan2.info_hewan.kembangbiak << endl;
	cout << "Pernapasan : "<< hewan2.info_hewan.pernafasan << endl;
	cout << "Tempat Hidup : "<< hewan2.info_hewan.tempat_hidup << endl;
	cout << "apakah karnivora? "<< hewan2.info_hewan.karnivora << endl;
	cout << "bentuk sirip : "<< hewan2.bentuk_sirip << endl;
	cout << "pertahanan diri : "<< hewan2.pertahanan_diri << endl;


	return 0;
	}
```

Fungsi di atas merupakan fungsi main atau fungsi utama dalam pemrograman, fungsi ini akan dieksekusi pertama kali dalam program. Dimana programer akan mengisi masing-masing value dari variabel yang disediakan. Lalu programer akan membuat kode yang berupa output dari value-value yang telah di masukkan. Mulai dari hewan_darat sampai hewan_laut.

#### Output:

```C++
Hewan Darat
Nama Hewan :Anjing
Jenis Kelamin : Laki-laki
Kembangbiak : Melahirkan
Pernapasan : Paru paru
Tempat Hidup : Darat
karnivora : 1
jumlah kaki : 4
apakah menyusui?  : 1
suara : Rawrr, guk, guk,guk

         Hewan Laut
Nama Hewan :Paus
Jenis Kelamin : Perempuan
Kembangbiak : Melahirkan
Pernapasan : paru paru
Tempat Hidup : Perairan (Laut)
apakah karnivora? 0
bentuk sirip : dosal, sabit, dan gumpalan
pertahanan diri :  Menghirup Oksigen di udara
```

**Penjelasan:**

Sesuai dengan fungsi main, output di atas urutannya telah di atur dalam fungsi main. Dimana output yang pertama tentunya akan berisi informasi dari jenis hewan darat, berikutnya akan berisi output dari jenis hewan laut. Output ini sesuai dengan value yang dimasukkan oleh programer ke dalam variabelnya.

#### Full Code Screenshot

<p align="center">
  <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assigment-Modul-5/blob/main/Modul%205/SS/codeguided2.png" alt="Alt Text">
</p>

#### Screenshot Output

<p align="center">
  <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assigment-Modul-5/blob/main/Modul%205/SS/OutG2.png" alt="Alt Text">
</p>

## Unguided 

### 1. Unguided 1

#### Modifikasi tugas guided pertama, sehingga setiap item yang terdapat pada struct buku berupa array yang berukuran 5, isi dengan data kemudian tampilkan.

**Kode Program:**

```C++
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
```

**Penjelasan:**

#### Bagian 1

```C++
#include <iostream>
#include <string>

using namespace std;
```

Library iostream digunakan untuk menjalankan operasi input dan output pada program. #include <string> digunakan mengatur string lebih luas dan lebih mudah serta dapat dimanipulasi. Lalu namespace std dipanggil agar saat penulisan fungsi tidak perlu ditambahkan std lagi.

#### Bagian 2

```C++
const int MAX_BUKU = 5;
```

Kode di atas mendeklarasikan konstanta MAX_BUKU yang mengizinkan maksimal buku di input sebanyak 5 buku.


#### Bagian 3

```C++
struct Buku {
    string judul_buku;
    string pengarang;
    string penerbit;
    int tebal_buku;
    double harga_buku;
    int tahun_terbit;
};
```

Kode di atas mendeklarasikan sebuah struct dengan nama Buku dengan 6 anggotanya tentunya memiliki tipe data yang berbeda-beda. Variabel yang telah dideklarasikan dalam struct ini akan digunakan pada fungsi main dan diberi value oleh pengguna yang memberi inputan.


#### Bagian 4

```C++
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
```

Kode di atas mendeklarasikan fungsi dengan nama tambahData. Fungsi ini dibuat untuk memasukkan data buku ke dalam struct Buku. Dimana fungsi tambahData ini akan digunakan pada fungsi main untuk menerima inputan dari pengguna program.

#### Bagian 5

```C++
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
```

Fungsi di atas merupakan fungsi main yang berupa fungsi utama di dalam progran. Fungsi ini akan meminta pengguna untuk memasukkan value dari setiap variabel yang telah dideklarasikan. for (int i = 0; i < MAX_BUKU; ++i) { } digunakan untuk meminta pengguna memasukkan value hingga maksimal 5 buku sesuai batas yang ditetapkan. Pada kode berikutnya, programer membuat ouput yang sesuai dengan value yang dimasukkan oleh pengguna.


**Output:**

```C++
Masukkan data untuk Buku 1
Judul Buku: Perjalanan Menuju Bintang
Pengarang: Rizal Pratama
Penerbit: Erlangga
Tebal Buku (halaman): 172
Harga Buku: 99000
Tahun Terbit: 2024

Masukkan data untuk Buku 2
Judul Buku: Seorang Pria Pencari Kesalahan Wanita
Pengarang: Wisnu Aji
Penerbit: Erlangga
Tebal Buku (halaman): 90
Harga Buku: 169000
Tahun Terbit: 2015

Masukkan data untuk Buku 3
Judul Buku: Seorang Kristen Pindah Muslim
Pengarang: Mikhael
Penerbit: Sinar Dunia
Tebal Buku (halaman): 800
Harga Buku: 400000
Tahun Terbit: 2010

Masukkan data untuk Buku 4
Judul Buku: Perjalanan Menjadi Coach 
Pengarang: Yoka
Penerbit: Montoon
Tebal Buku (halaman): 76
Harga Buku: 50000
Tahun Terbit: 2020

Masukkan data untuk Buku 5
Judul Buku: Cinta yang Tak Pernah ku Bayangkan
Pengarang: Fahmi Hidayat
Penerbit: PLH Entertain
Tebal Buku (halaman): 200
Harga Buku: 56000
Tahun Terbit: 2023

Data Buku:

Daftar Buku ke-1
Judul: Perjalanan Menuju Bintang
Pengarang: Rizal Pratama
Penerbit: Erlangga
Tebal Buku: 172 halaman
Harga Buku: Rp99000
Tahun Terbit: 2024

Daftar Buku ke-2
Judul: Seorang Pria Pencari Kesalahan Wanita
Pengarang: Wisnu Aji
Penerbit: Erlangga
Tebal Buku: 90 halaman
Harga Buku: Rp169000
Tahun Terbit: 2015

Daftar Buku ke-3
Judul: Seorang Kristen Pindah Muslim
Pengarang: Mikhael
Penerbit: Sinar Dunia
Tebal Buku: 800 halaman
Harga Buku: Rp400000
Tahun Terbit: 2010

Daftar Buku ke-4
Judul: Perjalanan Menjadi Coach
Pengarang: Yoka
Penerbit: Montoon
Tebal Buku: 76 halaman
Harga Buku: Rp50000
Tahun Terbit: 2020

Daftar Buku ke-5
Judul: Cinta yang Tak Pernah ku Bayangkan
Pengarang: Fahmi Hidayat
Penerbit: PLH Entertain
Tebal Buku: 200 halaman
Harga Buku: Rp56000
Tahun Terbit: 2023
```

#### Penjelasan

Pada output di atas, pengguna memasukkan value yang berbeda dari 5 buku. Mulai dari judul, pengarang, penerbit, tebal buku, harga buku, dan tahun terbit. Semua value yang dimasukkan akan keluar seperti output di atas sesuai dengan yang dideklarasikan pada fungsi main.

#### Full code Screenshot:

<p align="center">
  <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assigment-Modul-5/blob/main/Modul%205/SS/codeunguided1.png" alt="Alt Text">
</p>

#### Screenshot Output

<p align="center">
  <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assigment-Modul-5/blob/main/Modul%205/SS/OutPart1.png" alt="Alt Text">
</p>
<p align="center">
  <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assigment-Modul-5/blob/main/Modul%205/SS/OutPart2.png" alt="Alt Text">
</p>

NB : Screenshot terlalu panjang, oleh karena itu screenshot dibagi menjadi dua bagian.


### 2. Unguided 2

#### Apa yang terjadi jika deklarasi variabel struct yang dibuat pada tugas guided I, berjenis Array. Bagaimana cara mengisi data dan menampilkannya ? 

a. Jika deklarasi variabel struct pada guided 1 beripe array, dimana contohnya adalah Buku daftar_buku[MAX_BUKU] maka kita telah membuat array dari struktur buku dengan ukurannya yaitu MAX_BUKU yang dapat menyimpan buku hingga 5 jenis buku. 

b. Cara mengisi datanya sangatlah mudah, fungsi tambahData akan menerima objek Buku, lau digunakan sebuah looping for disetiap elemen dalam array daftar_buku. Berikutnya terdapat fungsi tambahData yang meminta pengguna kode untuk memasukkan judul buku, pengarang, penerbit, tebal buku, harga buku, dan tahun terbit yang disimpan dalam objek Buku. 

c. Untuk menampilkan datanya, digunakan looping for yang akan melakukan perulangan dalam elemen di dalam array daftar_buku. Kemudian, program akan mencetak setiap value yang diinputkan pada setiap variabel Buku.

## Kesimpulan

Pemrograman merupakan sebuah proses dalam pembuat program sebuah komputer. Dalam pembuatan program ini tentunya seorang programer harus memilih salah satu dari banyak bahasa pemrograman, salah satunya C++. Dalam bahasa pemrograman C++ terdapat Struct yang memungkinkan seseorang untuk membuat tipe data baru yang terdiri dari beberapa tipe data standar atau tipe data bentukan lainnya. 

Dalam bahasa pemrograman C++, struct dapat mempermudah dan memungkinkan programer untuk mengatur dan mengelola data dengan lebih baik. Tentunya, dengan algoritma yang tepat dalam penulisan struct dapat memberikan kemudahan dan meningkatkan efisiensi perangkat lunak.

## Referensi


[1]	C. W. SItorus, “PENERAPAN DAN FUNGSI ALGORITMA PEMROGRAMAN,” Вестник Росздравнадзора, vol. 4, no. 1, pp. 9–15, 2017.

[2]	A. Aliyanto, S. Utomo, and S. Santosa, “Sistem Pembelajaran Algoritma Stack Dan Queue Dengan Pendekatan Program Based Learning,” J. Teknol. Inf., vol. 7, no. 1, pp. 17–18, 2011.

[3]	L. J. E. Dewi, “MEDIA PEMBELAJARAN BAHASA PEMROGRAMAN C++,” Rev. Bras. Linguística Apl., vol. 5, no. 1, pp. 1689–1699, 2016, [Online].


