/*  TUGAS BESAR ALGORITMA DAN PEMROGRAMAN
    NAMA : GINO PUTRA WIDANA
    NPM  : 4522210049
	MATERI : TUGAS BESAR (SI PENJUALAN TOKO)
	                      -SELECTION
						  -REPETITION
						  -ARRAY
						  -FUNCTION
						  -STRING
						  -SELECTION SORT-ASCENDING
						                              */



#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// deklarasi function
int input();
int selection();
int repetition();
int array_();
int function_();
int string_();
int sort_ascending();

//deklarasi variable
int A[10];
int n;
string barang[10];
int harga[10];
int pilih;
int jumlah, total;

int main()
{
    input();
    selection();
    repetition();
    array_();
    function_();
    string_();
    sort_ascending();
    cin.get();
}

int input()
{
    cout<<endl;
    cout<< "========================================================"<<endl;
    cout<< "==========         	SELAMAT DATANG      ================"<<endl;
    cout<< "==========         	 DI TOKO KAMI       ================"<<endl;
    cout<< "==========         	 SERBA BARANG       ================"<<endl;
    cout<< "==========         	 MURAH MERIAH       ================"<<endl;
    cout<< "========================================================"<<endl;
    cout<<endl;
    cout<<endl;
    cout<< "Masukkan jumlah barang yang akan dijual : ";
    cin>>n;

    for(int i = 0; i < n; i++)
    {
        cout<<"Masukkan nama barang ke-"<<i+1<<" : ";
        cin>>barang[i];
        cout<<"Masukkan harga barang ke-"<<i+1<<" : ";
        cin>>harga[i];
    }
}

int selection()
{
    cout<<endl;
    cout<< "========================================================"<<endl;
    cout<< "==========         	PILIHAN BARANG     ============"<<endl;
    cout<< "========================================================"<<endl;
    cout<<endl;

    for(int i = 0; i < n; i++)
    {
        cout<<i+1<<". "<<barang[i]<<" dengan harga Rp. "<<harga[i]<<endl;
    }
}

int repetition()
{
	char lanjut;
    cout<<endl;
    cout<< "========================================================"<<endl;
    cout<< "==========         	PEMBELIAN BARANG   =================="<<endl;
    cout<< "========================================================"<<endl;
    cout<<endl;

    do
    {
        cout<<"Pilih barang yang ingin dibeli (1-"<<n<<") : ";
        cin>>pilih;
        cout<<"Masukkan jumlah barang : ";
        cin>>jumlah;

        total = jumlah * harga[pilih-1];
        cout<<"Total harga untuk "<<jumlah<<" "<<barang[pilih-1]<<" adalah Rp. "<<total<<endl;
     
        cout<<"Apakah Anda Ingin belanja Lagi? (y/n) : "; cin>>lanjut;
} while(lanjut == 'y');
}

int array_()
{
for(int i = 0; i < n; i++)
{
A[i] = harga[i];
}
}

int function_()
{
cout<<endl;
cout<< "========================================================"<<endl;
cout<< "========== STRUK PEMBELIAN ============================="<<endl;
cout<< "========================================================"<<endl;
cout<<endl;
cout<<"Anda membeli "<<jumlah<<" "<<barang[pilih-1]<<" dengan harga Rp. "<<total<<endl;
cout<<"Terima kasih sudah berbelanja di toko kami!"<<endl;

}

int string_()
{
ofstream file_gino;
file_gino.open("gino");
for(int i = 0; i < n; i++)
{
    file_gino<<barang[i]<<" dengan harga Rp. "<<harga[i]<<endl;
}
file_gino.close();

}

int sort_ascending()
{
int min, c;
for(int i = 0; i < n-1; i++)
{
min = i;
for(int j = i+1; j < n; j++)
{
if(A[j] < A[min])
{
min = j;
}
}
c = A[i];
A[i] = A[min];
A[min] = c;
}
cout<<endl;
cout<< "========================================================"<<endl;
cout<< "==========         	URUTAN BARANG     =================="<<endl;
cout<< "========================================================"<<endl;
cout<<endl;

for(int i = 0; i < n; i++)
{
    cout<<A[i]<<endl;
}
}