#include <iostream>
using namespace std;

int arr[20];   // Membuat array dengan panjang data 28 
int n;         // Membuat variable inputan n 

void input()
{ // proceduce Input
    while (true)
    {
        cout << "Masukkan jumlah data pada array : "; // membuat inputan jumlah element array
        cin >> n;                                    // memanggil variable inputan n

        if (n <= 20)
        {    // Membuat kondisi n tidak lebih dari 20
            break;

        }
        else
        {
            cout << "\nArray yang anda masukkan maksimal 20 elemen, \n";  // Menampilkan pesan jika data lebih
        }
    }
    cout << endl;                                     // membuat jarak per baris program
    cout << "======================" << endl;             // membuat tampilan susulan data elemnent array
    cout << "Masukkan Element Array" << endl;
    cout << "======================" << endl;

    for (int i = 0; 1 < n; i++)                    // membuat perulangan for untuk menyimpan data pada array 
    {
        cout << "data ke-" << (i +1) << ":";       // Masukkan atau menginputkan nilai data n
        cin >> arr[i];                             // Masukkan nilai data n kedalam array arr
        
    }
};
// procedure Insertionsort
void insertionsort()
{
    int temp;         // Membuat variable data temporer atau penyimpanan sementara 
    int j;            // Membuat variable j sebagai penanda


    for (int i = 1; i < n; i++)                // 1. Looping dengan i dimulai dari 1 hingga n-1
    {

        temp = arr[1];                        // 2. Simpan nilai arr[i] ke variabel sementara temp
        
        j = i - 1;                            // 3. Setting nilai j sama dengan i-1;


        while (j >= 0 && arr[j] > temp)      // 4. looping while dimana nilai j lebih besar 
        {
            arr[j + 1] = arr[j];   // a. simpan arr[j] ke dalam variabel arr[j + 1]
            j--;                  //  b. Decrement nilai j by 1
        }

        arr[j + 1] = temp;                 // 5. simpan nilai temp ke dalam arr[j + 1] 


        cout << endl;
        cout << "\nPass" << i << ":";   // Output ke layar 
        for (int k = 0; k < n; k++)
        {                              // Looping nilai k dimulai dari 0 hingga n-1
            cout << arr[k] << " ";    // Output ke layar
        }
    }
}; 

void display()
{
    cout << endl;                                            // Output baris kosong
    cout << "Total Element Movement = " << n - 1 << endl;    // Cout movement element
    cout << "\=======================" << endl;
    cout << "Element Array yang telah tersusun" << endl;     // Output ke layar 
    cout << "=========================" << endl;             // Output ke layar

    for (int j = 0; j < n; j++)                      // Looping dengan j dimulai dari 0 hingga n-1
    {
        cout << arr[j] << endl;                      // Output ke layar 

    }
    cout << endl;                                  // Output baris kosong
}





int main()
{
    input();               // Memanggil input 
    insertionsort();       // Memanggil insertionsort
    display();            // Memanggil display 
}


