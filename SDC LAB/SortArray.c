#include <stdio.h>
void InsertArr(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}
void DisplayArr(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d \t", a[i]);
    }
}
void BubbleSort(int a[], int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j + 1];
                a[j + 1] = a[j];
                a[j] = temp;
            }
        }
    }
}
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
    printf("Enter number of element to add: ");
    scanf("%d", &n);
    InsertArr(a, n);
    printf("Unsorted Array :");
    DisplayArr(a, n);
    printf("\n<-------Menu------>\n");
    printf("1)Bubble Sort \n2)Selection Sort\n3)Insertion Sort\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        BubbleSort(a, n);
        break;
    case 2:
        SelectionSort(a, n);
        break;
    case 3:
        InsertSort(a, n);
        break;
    default:
        printf("Please Select Correct choice.\n");
        break;
    }
    printf("Sorted Array :");
    DisplayArr(a, n);
    return 0;
}
