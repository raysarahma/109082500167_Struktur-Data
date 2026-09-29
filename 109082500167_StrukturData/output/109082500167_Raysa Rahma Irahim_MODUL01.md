# <h1 align="center">Laporan Praktikum Modul 1 - Codeblocks IDE & Pengenalan Bahas C++ (Bagian Pertama)</h1>

<p align="center">Raysa Rahma Irahim - 109082500167</p>

## Dasar Teori

Bahasa C++ dikembangkan oleh Bjarne Stroustrup di AT&T Bell Laboratories pada awal tahun 1980-an. Awalnya bahasa ini disebut "C with class", yaitu bahasa C yang ditambah fasilitas kelas, lalu disempurnakan dengan penambahan pembebanlebihan operator dan fungsi sehingga jadi C++ [1]. Untuk menulis dan menjalankan program C++ di praktikum ini kita pakai Code Blocks, yaitu IDE yang free, open-source, dan cross-platform [1].

Menurut buku ajar Indahyanti dan Rahmawati, mempelajari pemrograman dimulai dari memahami algoritma, yaitu langkah-langkah untuk menyelesaikan suatu masalah, lalu menerjemahkannya ke dalam bahasa pemrograman seperti C++ [2]. Di modul ini ada beberapa hal dasar yang dipakai untuk mengerjakan latihan.

### A. Dasar Pemrograman C++<br/>

Program C++ punya struktur umum, mulai dari deklarasi library (#include <iostream>), konstanta, variabel, fungsi atau prosedur, sampai fungsi utama main() [1]. Semua variabel harus dideklarasikan dulu sebelum dipakai, dan setiap pernyataan diakhiri titik koma (;) [1].

#### 1. Tipe Data dan Variabel
Variabel dipakai untuk menyimpan nilai yang bisa berubah selama program berjalan. Bentuk deklarasinya tipe_data nama_variabel;. Tipe data dasar yang dipakai di modul antara lain int untuk bilangan bulat, float dan double untuk bilangan real, dan char untuk karakter [1]. Aturan penamaan variabel sama dengan aturan identifier, dan C++ bersifat case sensitive [1].

#### 2. Input dan Output
Untuk output dipakai cout dengan operator <<, sedangkan untuk input dipakai cin dengan operator >>. Kalau di cin kita tidak perlu penentu format seperti %d atau %f di printf [1]. Untuk pindah baris bisa memakai endl atau escape sequence \n [1].

#### 3. Operator
Operator aritmatika yang dipakai adalah +, -, *, /, dan % (sisa bagi). Ada juga operator increment (++) dan decrement (--) yang bisa dipasang di depan (pre) atau di belakang (post) variabel, dan keduanya punya perbedaan hasil saat dipakai di dalam ekspresi [1].

### B. Struktur Kontrol<br/>

Menurut Indahyanti dan Rahmawati, ada tiga struktur dasar dalam algoritma, yaitu urutan (sekuensial), percabangan, dan perulangan [2]. Di modul ini ketiganya dipakai dalam bentuk berikut.

#### 1. Percabangan (if, if-else, switch)
Percabangan dipakai untuk mengambil keputusan berdasarkan kondisi. if menjalankan pernyataan hanya kalau kondisi benar, if-else menyediakan pilihan kalau kondisi salah, dan switch cocok kalau ada banyak alternatif nilai [1].

#### 2. Perulangan (for, while, do-while)
Perulangan dipakai supaya kita tidak perlu menulis perintah yang sama berulang-ulang, dan harus ada kondisi berhenti supaya tidak jadi loop tak terbatas [1]. Bentuk for terdiri dari inisialisasi, kondisi, dan increment/decrement [1]. Perulangan juga bisa dibuat bersarang (nested loop), yaitu loop di dalam loop, yang biasa dipakai untuk membuat pola.

#### 3. Fungsi
Fungsi memisahkan bagian program tertentu supaya lebih rapi dan bisa dipakai berkali-kali. Fungsi ditulis sebelum atau sesudah main() (kalau sesudah, perlu deklarasi prototype dulu di atas) [1].

## Guided

### 1. Buatlah program yang menerima input-an dua buah bilangan betipe float, kemudian memberikan output-an hasil penjumlahan, pengurangan, perkalian, dan pembagian dari dua bilangan tersebut.

```C++
#include <iostream>
using namespace std;

int main() {
    float a, b;

    cout << "Masukkan nilai a : ";
    cin >> a;

    cout << "Masukkan nilai b : ";
    cin >> b;

    cout << "Hasil penjumlahan = " << a + b << endl;
    cout << "Hasil pengurangan = " << a - b << endl;
    cout << "Hasil perkalian   = " << a * b << endl;
    cout << "Hasil pembagian   = " << a / b << endl;

    return 0;
}
```

penjelasan singkat guided 1 : Program ini dibuat untuk memasukkan dua nilai, yaitu a dan b, kemudian kedua nilai tersebut digunakan untuk melakukan operasi penjumlahan, pengurangan, perkalian, dan pembagian. Nilai a dan b dimasukkan lewat cin, sedangkan hasil dari setiap perhitungan ditampilkan menggunakan cout. Jadi, program ini menggunakan variabel, input-output, dan operator aritmatika untuk melakukan perhitungan sederhana.

### 2. Buatlah sebuah program yang menerima masukan angka dan mengeluarkan output nilai angka tersebut dalam bentuk tulisan. Angka yang akan di-input-kan user adalah bilangan bulat positif mulai dari 0 s.d 100

```C++
#include <iostream>
using namespace std;

int main() {
    int angka;
    string nama[] = {"nol", "satu", "dua", "tiga", "empat",
                     "lima", "enam", "tujuh", "delapan", "sembilan"};

    cout << "Masukkan angka : ";
    cin >> angka;

    cout << angka << " : ";

    if (angka < 10) {
        cout << nama[angka];
    }
    else if (angka == 10) {
        cout << "sepuluh";
    }
    else if (angka == 11) {
        cout << "sebelas";
    }
    else if (angka < 20) {
        cout << nama[angka - 10] << " belas";
    }
    else if (angka < 100) {
        cout << nama[angka / 10] << " puluh";

        if (angka % 10 != 0)
            cout << " " << nama[angka % 10];
    }
    else {
        cout << "seratus";
    }

    return 0;
}
```

penjelasan singkat guided 2 : Program ini dibuat untuk memasukkan sebuah angka, kemudian mengubah angka tersebut menjadi bentuk tulisan. Array digunakan untuk menyimpan nama angka dari nol sampai sembilan, sedangkan percabangan digunakan untuk menentukan tulisan sesuai dengan angka yang dimasukkan. Pada angka puluhan, pembagian dan sisa bagi digunakan untuk menentukan nilai puluhan dan satuannya, lalu hasil akhirnya ditampilkan ke layar.

### 3. Buatlah program yang dapat memberikan input dan output sbb.

```C++
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = n; i > 0; i--) {
        for (int s = n; s > i; s--)
            cout << "  ";

        for (int j = i; j > 0; j--)
            cout << j << " ";

        cout << "* ";

        for (int j = 1; j <= i; j++)
            cout << j << (j == i ? "" : " ");

        cout << endl;
    }

    for (int i = 0; i < n; i++)
        cout << "  ";

    cout << "*";

    return 0;
}
```

penjelasan singkat guided 3 : Program ini dibuat untuk menampilkan pola angka sesuai dengan nilai n yang dimasukkan. Perulangan digunakan untuk mengatur baris, spasi, serta urutan angka dari kiri ke kanan dengan tanda bintang di tengah. Nilai angka pada setiap baris akan berkurang sampai membentuk pola seperti pada soal, kemudian tanda bintang terakhir dicetak pada bagian paling bawah.

## Unguided

### 1. (Buatlah program yang menerima input-an dua buah bilangan betipe float, kemudian memberikan output-an hasil penjumlahan, pengurangan, perkalian, dan pembagian dari dua bilangan tersebut.)

```C++
#include <iostream>
using namespace std;

int main() {
    float a, b;

    cout << "Masukkan nilai a : ";
    cin >> a;

    cout << "Masukkan nilai b : ";
    cin >> b;

    cout << "Hasil penjumlahan = " << a + b << endl;
    cout << "Hasil pengurangan = " << a - b << endl;
    cout << "Hasil perkalian   = " << a * b << endl;
    cout << "Hasil pembagian   = " << a / b << endl;

    return 0;
}
```

### Output Unguided 1 :

##### Output 1

![Screenshot Output Unguided 1_1](https://github.com/raysarahma/109082500167_Struktur-Data/blob/main/109082500167_StrukturData/output/soal01_output1.png)

##### Output 2

![Screenshot Output Unguided 1_2](https://github.com/raysarahma/109082500167_Struktur-Data/blob/main/109082500167_StrukturData/output/soal01_output2.png)

penjelasan unguided 1 :
Program ini dibuat untuk memasukkan dua nilai, yaitu a dan b, kemudian kedua nilai tersebut digunakan untuk melakukan operasi penjumlahan, pengurangan, perkalian, dan pembagian. Nilai a dan b dimasukkan lewat cin, sedangkan hasil dari setiap perhitungan ditampilkan menggunakan cout. Jadi, program ini menggunakan variabel, input-output, dan operator aritmatika untuk melakukan perhitungan sederhana.


### 2. (Buatlah sebuah program yang menerima masukan angka dan mengeluarkan output nilai angka tersebut dalam bentuk tulisan. Angka yang akan di-input-kan user adalah bilangan bulat positif mulai dari 0 s.d 100)

```C++
#include <iostream>
using namespace std;

int main() {
    int angka;
    string nama[] = {"nol", "satu", "dua", "tiga", "empat",
                     "lima", "enam", "tujuh", "delapan", "sembilan"};

    cout << "Masukkan angka : ";
    cin >> angka;

    cout << angka << " : ";

    if (angka < 10) {
        cout << nama[angka];
    }
    else if (angka == 10) {
        cout << "sepuluh";
    }
    else if (angka == 11) {
        cout << "sebelas";
    }
    else if (angka < 20) {
        cout << nama[angka - 10] << " belas";
    }
    else if (angka < 100) {
        cout << nama[angka / 10] << " puluh";

        if (angka % 10 != 0)
            cout << " " << nama[angka % 10];
    }
    else {
        cout << "seratus";
    }

    return 0;
}
```

### Output Unguided 2 :

##### Output 1

![Screenshot Output Unguided 2_1](https://github.com/raysarahma/109082500167_Struktur-Data/blob/main/109082500167_StrukturData/output/soal02_output1.png)

##### Output 2

![Screenshot Output Unguided 2_2](https://github.com/raysarahma/109082500167_Struktur-Data/blob/main/109082500167_StrukturData/output/soal02_output2.png)

penjelasan unguided 2 :
Program ini dibuat untuk memasukkan sebuah angka, kemudian mengubah angka tersebut menjadi bentuk tulisan. Array digunakan untuk menyimpan nama angka dari nol sampai sembilan, sedangkan percabangan digunakan untuk menentukan tulisan sesuai dengan angka yang dimasukkan. Pada angka puluhan, pembagian dan sisa bagi digunakan untuk menentukan nilai puluhan dan satuannya, lalu hasil akhirnya ditampilkan ke layar.

### 3. (Buatlah program yang dapat memberikan input dan output sbb.)

```C++
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = n; i > 0; i--) {
        for (int s = n; s > i; s--)
            cout << "  ";

        for (int j = i; j > 0; j--)
            cout << j << " ";

        cout << "* ";

        for (int j = 1; j <= i; j++)
            cout << j << (j == i ? "" : " ");

        cout << endl;
    }

    for (int i = 0; i < n; i++)
        cout << "  ";

    cout << "*";

    return 0;
}
```

### Output Unguided 3 :

##### Output 1

![Screenshot Output Unguided 3_1](https://github.com/raysarahma/109082500167_Struktur-Data/blob/main/109082500167_StrukturData/output/soal03_output1.png)

##### Output 2

![Screenshot Output Unguided 3_2](https://github.com/raysarahma/109082500167_Struktur-Data/blob/main/109082500167_StrukturData/output/soal03_output1.png)

penjelasan unguided 3 :
Program ini dibuat untuk menampilkan pola angka sesuai dengan nilai n yang dimasukkan. Perulangan digunakan untuk mengatur baris, spasi, serta urutan angka dari kiri ke kanan dengan tanda bintang di tengah. Nilai angka pada setiap baris akan berkurang sampai membentuk pola seperti pada soal, kemudian tanda bintang terakhir dicetak pada bagian paling bawah.

## Kesimpulan
Dari praktikum modul 1 ini saya belajar cara memakai Code Blocks untuk membuat project, menulis kode, lalu build dan run. Saya juga jadi paham dasar C++ seperti deklarasi variabel, tipe data, input dengan cin, dan output dengan cout. Dari latihan, saya belajar bahwa tipe data sangat berpengaruh pada hasil hitungan (misalnya pembagian int yang hasilnya dibulatkan), percabangan if-else dan switch berguna untuk menangani banyak kondisi seperti di soal angka ke tulisan, dan perulangan bersarang bisa dipakai untuk membuat pola seperti soal Mirror.

## Referensi
[1] Laboratorium Informatika, Fakultas Informatika, Telkom University. (n.d.). Modul 1 Code Blocks IDE & Pengenalan Bahasa C++ (Bagian Pertama). Modul Praktikum Struktur Data.
[2] Indahyanti, U., & Rahmawati, Y. (2020). Buku Ajar Algoritma dan Pemrograman dalam Bahasa C++. Sidoarjo: Umsida Press. https://doi.org/10.21070/2020/978-623-6833-67-4
[3] Kadir, A., & Heriyanto. (2005). Algoritma Pemrograman Menggunakan C++ (Edisi 1). Yogyakarta: Andi Publisher.