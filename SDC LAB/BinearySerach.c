#include <stdio.h>

int main()
{
    int a[50], key, n, flag = 0;
    printf("Enter the value of Key :");
    scanf("%d", &key);
    printf("Enter how many number you want to add in array");
    scanf("%d", &n);
    // Taking the input from user
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    // Algorithm on Binary Search operation.
    int start = 0, end = n - 1, mid;
    for (int i = 0; i < n; i++)
    {
        mid = (start + end) / 2;
        // cout << mid << endl;
        if (a[mid] == key)
        {
            flag = 1;
            break;
        }
        else if (a[mid] > key)
        {
            end = mid;
        }
        else if (end < start)
        {
            break;
        }
        else
        {
            start = mid;
        }
    }
    // Constructing the statement which  show that the given number is present inside the array or not.
    if (flag == 1)
    {
        printf("The Number is found inside the array.");
    }
    else
    {
        printf("The Number is not found inside the array.");
    }

    return 0;
}
