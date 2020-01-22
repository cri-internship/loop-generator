#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(520, "random");
	double ***A = create_three_dim_double(170, 780, 620, "random");
	double ***E = create_three_dim_double(330, 810, 760, "random");
	double **C = create_two_dim_double(320, 480, "random");
	double *B = create_one_dim_double(300, "random");

	for (int c = 1; c < 760; c++)
	  for (int b = 5; b < 478; b++)
	    for (int a = 3; a < 319; a++)
	    {
	      
	      C[a][b]=C[a-3][b-5]/B[a]+D[a]-E[a][b][c]*A[a][b][c];
	      
	      D[a]=C[a][b]*A[a][b][c]-C[a][b];
	      D[a+3]=C[a][b];
	      
	      C[a][b]=0.951;
	      
	      E[a][b][c]=C[a][b]/A[a][b][c]*B[a];
	      E[a-1][b-5][c-1]=A[a][b][c]-D[a];
	    }

    return 0;
}