#include<stdio.h>
int A[50000],B[50000];
int size_A=0,size_B=0;
void Merge()
{
    int i=0, j=0;
    while(i<size_A && j <size_B)
        if(A[i]>=B[j])
        {
            printf("%d ", A[i]);
            i++;
        }
        else
        {
            printf("%d ",B[j]);
            j++;
        }
    for (;i<size_A; i++) printf("%d ",A[i]);
    for (;j<size_B; j++) printf("%d ",B[j]);
    return;
}
int main()
{
    scanf("%d%d",&size_A, &size_B);
    for(int i=0; i<size_A; i++)
    scanf("%d",&A[i]);
    for(int j=0; j<size_B; j++)
    scanf("%d",&B[j]);
    Merge();
}