#include<stdio.h>
void InsertArray(int a[], int n){
    for (int  i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    
}
void LinearSerach(int a[], int n, int key){
    int flag=0,i;
    for ( i = 0; i < n; i++)
    {
        if (a[i]==key)
        {
            flag =1;
            break;
        }
        
    }
    if (flag == 1)
    {
        printf("%d is found at %d position.",key,i);
    }
    else{
        printf("%d is not found in given Arrray.");
    }
    
    
    
}

int main(){
    int a[100],n,key;
    printf("Enter the Length of the Arrray :");
    scanf("%d",&n);
    InsertArray(a,n);
    printf("Enter the Element to Find Out :");
    scanf("%d",&key);
    LinearSerach(a,n,key);
    return 0;
}