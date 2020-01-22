#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(950, "zeros");
	double ***D = create_three_dim_double(290, 940, 670, "zeros");
	double *B = create_one_dim_double(260, "zeros");
	double **C = create_two_dim_double(150, 170, "zeros");

	for (int c = 0; c < 666; c++)
	  for (int b = 5; b < 168; b++)
	    for (int a = 4; a < 147; a++)
	    {
	      
	      A[a]=C[a][b]/D[a][b][c]*0.321;
	      A[a-4]=C[a][b]*D[a][b][c];
	      
	      C[a][b]=A[a]/B[a];
	      C[a+3][b+2]=0.196-A[a];
	      
	      double var_a=C[a][b]-0.729;
	      double var_b=C[a-2][b-5]-0.621;
	      
	      D[a][b][c]=D[a][b][c]+B[a];
	      B[a]=D[a+5][b+5][c+4]+B[a]*A[a]/C[a][b];
	    }

    return 0;
}