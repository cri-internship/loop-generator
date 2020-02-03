#include "init_dyn_array.h"
//FLOAT

float *create_one_dim_float(int size_dim1, char init_with[])
{

    // Allocating one dimensional dynamic array
    float *array = malloc(size_dim1 * sizeof(float));

    // Accessing one dimensional array
	    for (int i = 0; i<size_dim1; i++)
	        if (strcmp(init_with, "zeros")==0)
	            *(array+i) = 0;
	        else if (strcmp(init_with, "ones")==0)
	            *(array+i) = 1;
	        else
	            *(array+i) = (float) rand() / ((float) RAND_MAX + 1);

	return array;
}


float **create_two_dim_float(int size_dim1, int size_dim2, char init_with[])
{
    // Allocating two dimensional dynamic array
    float **array = (float **)malloc(size_dim1 * sizeof(float *));
    for (int i=0; i<size_dim1; i++)
        array[i] = (float *)malloc(size_dim2 * sizeof(float));

    // Accessing two dimensional array
	for (int i = 0; i<size_dim1; i++)
		for (int j = 0; j<size_dim2; j++)
		    if (strcmp(init_with, "zeros")==0)
	            array[i][j] = 0;
	        else if (strcmp(init_with, "ones")==0)
	            array[i][j] = 1;
	        else
	            array[i][j] = (float) rand() / ((float) RAND_MAX + 1);

	return array;
}

float ***create_three_dim_float(int size_dim1, int size_dim2, int size_dim3, char init_with[])
{
	// Allocating three dimensional dynamic array
	float ***array =(float ***) malloc(size_dim1 * sizeof(float ***));
	for(int i=0;  i<size_dim1;  i++)
	{
		array[i]=(float **)malloc(size_dim2 * sizeof(float *));
		for(int j=0;  j<size_dim2;  j++)
			array[i][j]=(float *)malloc(size_dim3 * sizeof(float));
	}

	// Accessing three dimensional array
	for(int k=0;  k<size_dim1;  k++)
		for(int i=0;  i<size_dim2;  i++)
			for(int j=0;  j<size_dim3;  j++)
			    if (strcmp(init_with, "zeros")==0)
				    array[k][i][j] = 0;
				else if (strcmp(init_with, "ones")==0)
				    array[k][i][j] = 1;
				else
				    array[k][i][j] = (float) rand() / ((float) RAND_MAX + 1);

	return array;
}

//DOUBLE
double *create_one_dim_double(int size_dim1, char init_with[])
{

    // Allocating one dimensional dynamic array
    double *array = malloc(size_dim1 * sizeof(double));

    // Accessing one dimensional array
    for (int i = 0; i<size_dim1; i++)
        if (strcmp(init_with, "zeros")==0)
	        *(array+i) = 0;
	    else if (strcmp(init_with, "ones")==0)
	        *(array+i) = 1;
	    else
	        *(array+i) = (double) rand() / ((double) RAND_MAX + 1);

	return array;
}


double **create_two_dim_double(int size_dim1, int size_dim2, char init_with[])
{
    // Allocating two dimensional dynamic array
    double **array = (double **)malloc(size_dim1 * sizeof(double *));
    for (int i=0; i<size_dim1; i++)
        array[i] = (double *)malloc(size_dim2 * sizeof(double));

    // Accessing two dimensional array
	for (int i = 0; i<size_dim1; i++)
		for (int j = 0; j<size_dim2; j++)
		    if (strcmp(init_with, "zeros")==0)
	            array[i][j] = 0;
	        else if (strcmp(init_with, "ones")==0)
	            array[i][j] = 1;
	        else
	            array[i][j] = (double) rand() / ((double) RAND_MAX + 1);

	return array;
}

double ***create_three_dim_double(int size_dim1, int size_dim2, int size_dim3, char init_with[])
{
	// Allocating three dimensional dynamic array
	double ***array =(double ***) malloc(size_dim1 * sizeof(double ***));
	for(int i=0;  i<size_dim1;  i++)
	{
		array[i]=(double **)malloc(size_dim2 * sizeof(double *));
		for(int j=0;  j<size_dim2;  j++)
			array[i][j]=(double *)malloc(size_dim3 * sizeof(double));
	}

	// Accessing three dimensional array
	for(int k=0;  k<size_dim1;  k++)
		for(int i=0;  i<size_dim2;  i++)
			for(int j=0;  j<size_dim3;  j++)
			    if (strcmp(init_with, "zeros")==0)
				    array[k][i][j] = 0;
				else if (strcmp(init_with, "ones")==0)
				    array[k][i][j] = 1;
				else
				    array[k][i][j] = (double) rand() / ((double) RAND_MAX + 1);

	return array;
}

//INT

int *create_one_dim_int(int size_dim1, char init_with[])
{

    // Allocating one dimensional dynamic array
    int *array = malloc(size_dim1 * sizeof(int));

    // Accessing one dimensional array
    for (int i = 0; i<size_dim1; i++)
        if (strcmp(init_with, "zeros")==0)
	        *(array+i) = 0;
	    else if (strcmp(init_with, "ones")==0)
	        *(array+i) = 1;
	    else
	        *(array+i) = rand() % 20 + 1;

	return array;
}







int **create_two_dim_int(int size_dim1, int size_dim2, char init_with[])
{
    // Allocating two dimensional dynamic array
    int **array = (int **)malloc(size_dim1 * sizeof(int *));
    for (int i=0; i<size_dim1; i++)
        array[i] = (int *)malloc(size_dim2 * sizeof(int));

    // Accessing two dimensional array
	for (int i = 0; i<size_dim1; i++)
		for (int j = 0; j<size_dim2; j++)
		    if (strcmp(init_with, "zeros")==0)
	            array[i][j] =  0;
	        else if (strcmp(init_with, "ones")==0)
	            array[i][j] =  1;
	        else
	            array[i][j] =  rand() % 20 + 1;

	return array;
}

int ***create_three_dim_int(int size_dim1, int size_dim2, int size_dim3, char init_with[])
{
	// Allocating three dimensional dynamic array
	int ***array =(int ***) malloc(size_dim1 * sizeof(int ***));
	for(int i=0;  i<size_dim1;  i++)
	{
		array[i]=(int **)malloc(size_dim2 * sizeof(int *));
		for(int j=0;  j<size_dim2;  j++)
			array[i][j]=(int *)malloc(size_dim3 * sizeof(int));
	}

	// Accessing three dimensional array
	for(int k=0;  k<size_dim1;  k++)
		for(int i=0;  i<size_dim2;  i++)
			for(int j=0;  j<size_dim3;  j++)
			    if (strcmp(init_with, "zeros")==0)
				    array[k][i][j] = 0;
				else if (strcmp(init_with, "ones")==0)
				    array[k][i][j] = 1;
				else
				    array[k][i][j] = rand() % 20 + 1;

	return array;
}

void deallocate_1d_array(int *a) {
    free(a);
}
void deallocate_2d_array(int **a, int l, int m) {
    int i;
    for (i = 0; i < l; ++i) {
        free(a[i]);
    }
    free(a);
}
void deallocate_3d_array(int*** a,int l,int m, int k)
{
    int i,j;
    for(i=0;i<l;i++)
    {
        for(int j=0;j<m;j++)
        {
                free(a[i][j]);
        }
        free(a[i]);
    }
    free(a);
}