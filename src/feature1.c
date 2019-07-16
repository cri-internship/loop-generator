#include <stdio.h>
#include <stdlib.h>
#include <time.h>


float *create_one_dim(int size_dim1)
{
    // Allocating one dimensional dynamic array
    float *array = malloc(size_dim1 * sizeof(float));

    // Accessing one dimensional array
    for (int i = 0; i<size_dim1; i++)
	    *(array+i) = (float) rand() / ((float) RAND_MAX + 1);

	return array;
}


float **create_two_dim(int size_dim1, int size_dim2)
{
    // Allocating two dimensional dynamic array
    float **array = (float **)malloc(size_dim1 * sizeof(float *));
    for (int i=0; i<size_dim2; i++)
        array[i] = (float *)malloc(size_dim2 * sizeof(float));

    // Accessing two dimensional array
	for (int i = 0; i<size_dim1; i++)
		for (int j = 0; j<size_dim2; j++)
	         array[i][j] = (float) rand() / ((float) RAND_MAX + 1);

	return array;
}

float ***create_three_dim(int size_dim1, int size_dim2, int size_dim3)
{
	// Allocating three dimensional dynamic array
	float ***array =(float ***) malloc(size_dim1 * sizeof(float ***));
	for(int i=0;  i<size_dim1;  i++)
	{
		array[i]=(float **)malloc(size_dim2 * sizeof(float *));
		for(int j=0;  j<size_dim3;  j++)
			array[i][j]=(float *)malloc(size_dim3 * sizeof(float));
	}

	// Accessing three dimensional array
	for(int k=0;  k<size_dim1;  k++)
		for(int i=0;  i<size_dim2;  i++)
			for(int j=0;  j<size_dim3;  j++)
				array[k][i][j] = (float) rand() / ((float) RAND_MAX + 1);

	return array;
}


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

	float **result = create_two_dim(6, 6);
	float **A = create_two_dim(6, 6);
	float *B = create_one_dim(6);

	for (int b = 0; b < 6; b++)
	  for (int a = 0; a < 6; a++)
	  {
	    result[b][a] = A[b][a]*0.6506342167943959*0.5361923156449003+B[a]*A[a][a]/B[b]/B[a]/A[a][a]-B[b]-0.718123066611673+B[b]+0.6066994876980712;
	  }

    return 0;
}