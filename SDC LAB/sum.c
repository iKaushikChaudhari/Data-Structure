#include<stdio.h>
//Function for taking Input from Users
void InsertArray(int a[], int n){
    int i;
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    
}
//Function to Sum one by one element from Array.
void SumArray(int a[], int n){
    int i,sum =0;
    for ( i = 0; i < n; i++)
    {
        sum += a[i];
    }
    printf("Sum of %d terms is %d",n,sum);
    
}
int main(){
    int n,a[101];
    printf("Enter the value of N :");
    scanf("%d",&n);
    InsertArray(a,n);
    SumArray(a,n);
    
    return 0;
}