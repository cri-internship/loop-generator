#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(810, "zeros");
	double *A = create_one_dim_double(550, "zeros");
	double **B = create_two_dim_double(270, 430, "zeros");
	double **E = create_two_dim_double(350, 970, "zeros");
	double ***D = create_three_dim_double(890, 350, 40, "zeros");

	for (int c = 4; c < 430; c++)
	  for (int b = 1; b < 270; b++)
	    for (int a = 1; a < 270; a++)
	    {
	      
	      B[a][b]=B[a][b-4]*0.475-C[a]+D[a][b][c];
	      
	      B[a][b]=B[a-1][b]-0.336;
	      
	      E[a][b]=E[a][b]-B[a][b]*A[a];
	      D[a][b][c]=E[a+4][b+5]/C[a]-B[a][b];
	      
	      double var_a=C[a]-0.766;
	      double var_b=C[a-1]/0.706;
	    }

    return 0;
}