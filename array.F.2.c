#include <stdio.h>

int maxDifference(int arr1[], int n)
{
    int i;
    int min_element=arr1[0];
    int diff=arr1[1]-arr1[0];
    for(i=1;i<n;i++)
    {
        if(arr1[i]-min_element>diff)
        {
            diff=arr1[i]-min_element;
            printf("The elements which provide maximum difference is: %d,   %d\n", min_element,arr1[i]);

        }
        if(arr1[i]<min_element)
            min_element=arr1[i];
    }
    return diff;
}

int main()
{
  int arr1[] =  { 7, 9, 5, 6, 13, 2 };
     int n = sizeof(arr1) / sizeof(arr1[0]);
     int i;
	printf("The given array is :  ");
	for(i = 0; i < n; i++)
	{
	printf("%d  ", arr1[i]);
    }
	printf("\n");

  printf("The Maximum difference between two elements in the array is:  %d",  maxDifference(arr1, n));
  getchar();
  return 0;
}
