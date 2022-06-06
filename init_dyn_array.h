#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

float *create_one_dim_float(int size_dim1, char init_with[]);

float **create_two_dim_float(int size_dim1, int size_dim2, char init_with[]);

float ***create_three_dim_float(int size_dim1, int size_dim2, int size_dim3, char init_with[]);

double *create_one_dim_double(int size_dim1, char init_with[]);

double **create_two_dim_double(int size_dim1, int size_dim2, char init_with[]);

double ***create_three_dim_double(int size_dim1, int size_dim2, int size_dim3, char init_with[]);

int *create_one_dim_int(int size_dim1, char init_with[]);

int **create_two_dim_int(int size_dim1, int size_dim2, char init_with[]);

int ***create_three_dim_int(int size_dim1, int size_dim2, int size_dim3, char init_with[]);

void deallocate_1d_array(int *a);
void deallocate_2d_array(int **a, int l, int m); //TODO: change signature! we don't need last dimension
void deallocate_3d_array(int*** a,int l,int m, int k); //TODO: change signature!  we don't need last dimension