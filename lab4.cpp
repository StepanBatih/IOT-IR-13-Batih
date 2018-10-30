#include <stdio.h>


int main()
{
	int arr[5][5] = {{ 34 , -8, 27, 7, 12 },
					{ -5 , 23 , 45 , 67, -2 },
					{ 13, -12, 34, -3, 25},
					{ 17, 56, -6, 17, 21},
					{ 0, 15, 4, 9, -14 }};
	int tmp;
	
	
	for(int i = 0; i < 5; ++i)
	{
		for(int j = 0; j < 5; ++j)
			printf("%d\t", arr[i][j]);
		printf("\n");
	}
	printf("\n");
	
	
	for(int k = 0; k < 5; ++k)
	{
		//сортування рядка по спаданню елементів
		for(int i = 0; i < 5 - 1; ++i)
		{

			for(int j = 0; j < 5 - i - 1; ++j)
			{
				if(arr[k][j] > arr[k][j+1])
				{
					tmp = arr[k][j];
					arr[k][j] = arr[k][j+1];
					arr[k][j+1] = tmp;	
				}
			}
		}
		
	}
	for(int i = 0; i < 5; ++i)
	{
		for(int j = 0; j < 5; ++j)
			printf("%d\t", arr[i][j]);
		printf("\n");
	}
	printf("\n");

	int min[5];
	for(int i = 0; i < 5; ++i)
	{
		//пошук мінімального значення в стовпці
		min[i] = arr[0][i];
		for(int j =  1; j < 5 ; ++j)
		{
			if(min[i] > arr[j][i])
				min[i] = arr[j][i];
		}
		printf("%d\t", min[i]);
	}
	return 0;
}
