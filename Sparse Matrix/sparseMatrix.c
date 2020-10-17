#include<stdio.h>
#include<stdlib.h>
#include<conio.h>


int rows;
int cols;
int isSparse();
int main()
{
    printf("Enter no. of rows ");
    scanf("%d",&rows);
    printf("Enter no. of columns ");
    scanf("%d",&cols);
    int arr[rows][cols];
    for(int i=0;i<rows;i++)
    {
        printf("\nRow %d : ",i+1);
        for(int j=0;j<cols;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int check = isSparse(arr);
    if(check==-1)
    {
        printf("\nIt is not a sparse matrix");
    }
    else
    {
        int sparse[check][3];
        int count=0;
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<cols;j++)
            {
                if(arr[i][j]!=0)
                {
                    sparse[count][0] = i;
                    sparse[count][1] = j;
                    sparse[count][2] = arr[i][j];
                    count++;
                }
            }
        }
        for(int i=0;i<check;i++)
        {
            printf("\n%d %d %d",sparse[i][0],sparse[i][1],sparse[i][2]);
        }
    }
    
}

int isSparse(int arr[rows][cols])
{
    int count = 0;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            if(arr[i][j]!=0)
                count++;
        }
    }
    if(count>=(rows*cols)/2) return -1;
    return count;
}





