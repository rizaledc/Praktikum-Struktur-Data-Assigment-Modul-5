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