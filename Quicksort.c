// Quick sort Algorithm
#include <stdio.h>

void quick_sort(int[], int, int);
int partition(int[], int, int);

int main() {
  int a[50], n, i;
  printf("Enter number of elements: ");
  scanf("%d", & n);
  printf("\nEnter array elements: ");

  for (i = 0; i < n; i++)//Scanning array to be sorted
  {
 	 scanf("%d", & a[i]);
  }

  quick_sort(a, 0, n - 1);
  printf("\nArray after sorting: ");

  for (i = 0; i < n; i++)//Printing sorted array
    printf("%d ", a[i]);

  return 0;
}

void quick_sort(int a[], int l, int u)
{
  int j;
  if (l < u)
  {
    j = partition(a, l, u);
    quick_sort(a, l, j - 1);
    quick_sort(a, j + 1, u);
  }
}

int partition(int a[], int l, int u)
{
  int v, i, j, temp;
  v = a[l];
  i = l;
  j = u + 1;

  do {
    do
      i++;

    while (a[i] < v && i <= u);

    do
      j--;
    while (v < a[j]);

    if (i < j) {
      temp = a[i];
      a[i] = a[j];
      a[j] = temp;
    }
  } while (i < j);

  a[l] = a[j];
  a[j] = v;

  return (j);
}
