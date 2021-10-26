#include <iostream>
using namespace std;
int binarySearch(int arr[], int p, int r, int num)
{
   if (p <= r)
   {
      int mid = (p + r) / 2;
      if (arr[mid] == num)
         return mid;
      if (arr[mid] > num)
         return binarySearch(arr, p, mid - 1, num);
      if (arr[mid] < num)
         return binarySearch(arr, mid + 1, r, num);
   }
   return -1;
}
int main(void)
{
   int arr[] = {1, 2, 3, 4, 5};
   int n = sizeof(arr) / sizeof(arr[0]); // Mencari jumlah elemen dalam array
   int num;
   cout << "Array: ";
   for (int i = 0; i < n; i++) // Menampilkan elemen-elemen pada array
      cout << arr[i] << " ";
   cout << endl;

   cout << "Masukkan angka yang akan dicari: \n";
   cin >> num;
   int index = binarySearch(arr, 0, n - 1, num);
   if (index == -1)
   {
      cout<< "-> Angka " << num <<" tidak ada di dalam array";
   }
   else
   {
      cout<< "-> Angka "<< num <<" terdapat pada indeks ke-"<< index <<" di dalam array";
   }

   return 0;
}