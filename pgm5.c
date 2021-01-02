#include <stdio.h>
void sort(int n, int* ptr)
{
	int i, j, t;
	for (i = 0; i < n; i++) {

		for (j = i + 1; j < n; j++) {

			if (*(ptr + j) < *(ptr + i)) {

				t = *(ptr + i);
				*(ptr + i) = *(ptr + j);
				*(ptr + j) = t;
			}
		}
	}
	for (i = 0; i < n; i++)
		printf("%d ", *(ptr + i));
}
int main()
{
	int n;
	int arr[20];
	printf("Enter size:\n");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
    {
        printf("Element %d:\n",i+1);
        scanf("%d",&arr[i]);
    }

	sort(n, arr);

	return 0;
}
