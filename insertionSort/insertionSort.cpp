#include <iostream>

void insertionSort(int a[], int n);
void insertNextItem(int a[], int i);
void inputArray(int a[], int n);

using namespace std;

int main()
{
    int n;
    
    cout << "20203496 이장근"
    cout << "Enter the number of integers to sort: ";
    cin >> n;

    int a[100];
    inputArray(a, n);

    insertionSort(a, n);

    cout << "\nSorted array is: ";
    for (int j = 0; j < n; j++)
        cout << a[j] << " ";
    cout << endl;

    int return_value;
    cin >> return_value;

    return 0;
}

void insertionSort(int a[], int n)
{
    int i;
    for (i = 1; i < n; i++)
    {
        insertNextItem(a, i);
    }
}

void insertNextItem(int a[], int i)
{
    int newItem = a[i];
    int insertPos = i;
    while (insertPos > 0 && newItem < a[insertPos - 1])
    {
        a[insertPos] = a[insertPos - 1];
        insertPos--;
    }
    a[insertPos] = newItem;
}

void inputArray(int a[], int n)
{
    cout << "Insert " << n << " integers:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}
