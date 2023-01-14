#include<stdio.h>
main(){
    int n=7,z;
    int arr[n][n];
    for (int linea = 0; linea < n; linea++)
    {
        for (int i = 0; i <= linea; i++)
        {
        if (linea == i || i == 0)
            arr[linea][i] = 1;
        else
            arr[linea][i] = arr[linea - 1][i - 1] +
                            arr[linea - 1][i];
        }
    }
z=0;
for (int linea = n-1; linea >= 0; linea--)
{
	for (int j=z; j > 0; j--){
		printf(" ");
    }
    for (int i = linea; i >= 0; i--)
    {
    		printf("%d ",arr[linea][i]);
		}
		printf("\n");
		z++;
		}	
}

