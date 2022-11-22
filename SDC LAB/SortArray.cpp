#include <iostream>

using namespace std;
// InsertArr Function take the element from user one by one .
void InsertArr(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}
// DisplayArr Function show the array element.
void DisplayArr(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
// In Bubble Sorting the sorting process done as show in below :
//  At first iteration , Largest[(n-1)th] Element present inside the array is sorted then next iteration (n-2)th and so on
void BubbleSort(int a[], int n)
{
    int temp;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i; j < n - i - 1; j++)
        {
            if (a[j] > a[j +1])
            {
                temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
            }
        }
    }
}
// In Selection Sorting the sorting process done as show in below :
// Sorting process start from first element to last element 
void SelectionSort(int a[], int n)
{
    int x, temp;
    for (int i = 0; i < n - 1; i++)
    {
        x = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[x] > a[j])
            {
                x = j;
            }
            if (x != i)
            {
                temp = a[i];
                a[i] = a[x];
                a[x] = temp;
            }
        }
    }
}
// In Insertion Sorting Process  when the element is in between two element then this element goes inside (Inserted) these two element 
void InsertSort(int a[], int n)
{
    int key, j;
    for (int i = 1; i < n; i++)
    {
        key = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = key;
    }
}
int main()
{
    int a[100], n, choice;
    cout << "Enter number of element to add:";
    cin >> n;
    InsertArr(a, n);
    cout<<"Unsorted Array";
    DisplayArr(a, n);
    cout << "<-----------MENU-------->" << endl;
    cout << "1)Bubble Sort" << endl
         << "2)Selection Sort" << endl
         << "3)Insertion Sort" << endl;
    cin >> choice;
    switch (choice)
    {
    case 1:
        // Bubble Sorting
        BubbleSort(a, n);
        break;
    case 2:
        // Selection Sorting
        SelectionSort(a, n);
        break;
    case 3:
        // Insertion Sorting
        InsertSort(a, n);
        break;

    default:
        cout << "Please Select correct option.";
        break;
    }
    cout<<"Sorted Array :";
    DisplayArr(a, n);
    return 0;
}