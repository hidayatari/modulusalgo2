#include <iostream>
using namespace std;

int data[10], data2[10];
int n;

void tukar(int a, int b)
{
 int t;
 t = data[b];
 data[b] = data[a];
 data[a] = t;
}

void bubble_sort()
{
 for(int i=1; i<=n; i++)
 {
  for(int j=n; j>=i; j--)
  {
   if(data[j] < data[j-1])
   {
    tukar(j, j-1);
   }
  }
 }
}

main()
{
 cout << "Masukkan jumlah data: ";
 cin >> n;
 cout << endl;
 for(int i=1; i<=n; i++)
 {
  cout << "Masukkan data ke-" << i << ": ";
  cin >> data[i];
  data2[i] = data[i];
 }

 bubble_sort();

 cout << "\nData Setelah diurutkan" << endl;
 cout << "------------------------" << endl;
 for(int i=1; i<=n; i++)
 {
  cout << data[i] << " ";
 }
 cout << endl;

}
