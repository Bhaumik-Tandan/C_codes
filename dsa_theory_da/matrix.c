#include<stdio.h>
#include <stdlib.h>
int count;
float avg_subtract(float avg,float e,int n)
{
    return ((avg*n)-e)/(n-1);
}

void disp(float **matrix,int n)
{
    printf("\nThe matrix is:- \n");
    for(int i=0;i<n;i++)
    {
        printf("\n");
        for(int j=0;j<n;j++)
        printf("%.2f ",matrix[i][j]);
    }
}

float* takeinput(int *n)
{
    float *a;
    printf("Enter the size of array: ");
    scanf("%d",n);
    a=(float*)malloc(sizeof(float)*(*n));
    printf("Enter the array: ");
    for(int i=0;i<*n;i++)
    scanf("%f",a+i);
    return a;
}

float** allocate_memory(int n)
{
    float **matrix=(float**)malloc(sizeof(float*)*n);
    for(int i=0;i<n;i++)
    matrix[i]=(float*)calloc(sizeof(float),n);
    return matrix;
}

void cal_avg(float **matrix,int n,float* arr)
{
    float sum=0;
    for(int i=0;i<n;i++)
    {        
        sum+=arr[i];     
        matrix[0][i]=sum/(i+1);
        count++;//matrix allocated
    } 
}

void set_matrix(float **matrix,int n,float* arr)
{
    cal_avg(matrix,n,arr);
    for(int i=1;i<n;i++)
        for(int j=i;j<n;j++){
        matrix[i][j]=avg_subtract(matrix[i-1][j],arr[i-1],j-i+2);
        count++;//matrix allocated
        }
}

main()
{
    int n;
    float *arr=takeinput(&n);
    float **matrix=allocate_memory(n);
    set_matrix(matrix,n,arr);
    disp(matrix,n);
    printf("\nAssignments operations: %d",count);
}