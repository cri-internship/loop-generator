#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(750, 600, "zeros");
	double ***E = create_three_dim_double(890, 800, 810, "zeros");
	double *B = create_one_dim_double(670, "zeros");
	double *D = create_one_dim_double(950, "zeros");
	double ***A = create_three_dim_double(930, 190, 260, "zeros");

	for (int c = 4; c < 260; c++)
	  for (int b = 3; b < 190; b++)
	    for (int a = 1; a < 670; a++)
	    {
	      
	      B[a]=B[a-1]+0.303;
	      
	      A[a][b][c]=A[a][b-3][c-4]-B[a]/E[a][b][c]+C[a][b]*D[a];
	      
	      E[a][b][c]=E[a+3][b+2][c+4]*A[a][b][c]+0.142/B[a]-C[a][b];
	      
	      C[a][b]=E[a][b][c]/A[a][b][c];
	      C[a+2][b+1]=E[a][b][c]/A[a][b][c]-0.17;
	    }

    return 0;
}