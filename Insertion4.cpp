#include <iostream>
using namespace std;

int arr[20];
int n;

void input ()
{
while (true)
{
cout << "Masukkan Jumlah Data pada Array : ";
cin >> n;

if (n <=20)
{
    break;
}
else
{
    cout << "\nArray yang anda masukkan maksimal 20 Elemen.\n";
}
}
cout << endl;
cout << "======================" << endl;
cout << "Masukkan Element Array" << endl;
cout << "======================" << endl;

for (int i = 0; i < n; i++)
{
cout << "Data ke-" << (i + 1) << ": ";
cin >> arr[i];
}
}

void insertionSort ()
{

 int temp; // Membuat Variable data temporer atau penyimpanan sementara
 int j, i; // Membuat variable j sebagai penanda
    
for (i = 1; i <= n - 1; i++)
{ //step 1

temp = arr [i]; //step 2

j = i -1; //step 3

while (j >= 0 && arr[j] > temp) //step 4
{
arr[j + 1] = arr[j]; //step 4a
j--; //step 4b
}

arr [j + 1] = temp; //step 5
}
}

void display ()
{
cout << endl;
cout << "=================================" << endl;
cout << "Total Passs = " << n - 1 << endl;
cout << "=================================" << endl;
cout << "Element Array yang telah tersusun" << endl;
cout << "=================================" << endl;

for (int j = 0; j < n; j++)
{
cout << arr [j] << endl; 
}
cout << endl;
}

 int main ()
 {
    input();
    insertionSort() ;
    display() ;
    system("Pause");
    return 0;
 }