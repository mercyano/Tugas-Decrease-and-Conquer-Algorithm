#include<iostream>
using namespace std;

void tukar(int &a, int &b) { // Tukar variabel a dengan b
   int temp;
   temp = a;
   a = b;
   b = temp;
}

void display(int *array, int size) { // Menampilkan elemen-elemen pada array
   for(int i = 0; i<size; i++)
      cout << array[i] << " ";
   cout << endl;
}

void selectionSort(int *array, int size) { // Selection Sort
   int i, j, imin;
   for(i = 0; i<size-1; i++) {
      imin = i;   // Index dengan nilai minimum
      for(j = i+1; j<size; j++)
         if(array[j] < array[imin])
            imin = j;
         // Menukar elemen ke posisi yang tepat
         tukar(array[i], array[imin]);
   }
}


int main() {
   int n;
   cout << "Masukkan jumlah elemen pada Array: ";
   cin >> n;
   int arr[n];  // Membuat array dengan jumlah masukkan user

   cout << "Masukkan elemen-elemen pada Array: " << endl;
   for(int i = 0; i<n; i++) { // Memasukkan input pengguna kedalam array
      cin >> arr[i];
   }

   cout << "Array yang dimasukkan: ";
   display(arr, n);
   selectionSort(arr, n);
   cout << "Array setelah di Sorting: ";
   display(arr, n);
}