#include <stdio.h>
void merge(int[], int, int[], int, int[]);
int main()
{
     int a[100], b[100], m, n, c, sorted[200];
     printf("Input number of elements in first array\n");
     scanf("%d", &m);
     printf("Input %d integers\n", m);
     for (c = 0; c < m; c++)
     {
          scanf("%d", &a[c]);
     }
     printf("Input number of elemenrs in second array \n");
     scanf("%d", &n);
     printf("Input %d integers\n", n);
     for (c = 0; c < n; c++)
     {
          scanf("%d", &b[c]);
     }
     merge(a, m, b, n, sorted);
     printf("Sorted array : \n");
     for (c = 0; c < m + n; c++)
     {
          printf("%d ", sorted[c]);
     }
     return 0;
}
void merge(int a[], int m, int b[], int n, int sorted[])
{
     int i, j, k;
     j = k = 0;
     for (i = 0; i < m + n;)
     {
          if()
     }
}
