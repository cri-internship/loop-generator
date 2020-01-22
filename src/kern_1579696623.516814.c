#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***D = create_three_dim_double(230, 360, 870, "zeros");
	double *B = create_one_dim_double(910, "zeros");
	double **C = create_two_dim_double(320, 420, "zeros");
	double *A = create_one_dim_double(870, "zeros");
	double *E = create_one_dim_double(350, "zeros");

	for (int d = 4; d < 866; d++)
	  for (int c = 1; c < 355; c++)
	    for (int b = 2; b < 225; b++)
	      for (int a = 2; a < 225; a++)
	      {
	        
	       D[a][b][c]=D[a-2][b-1][c-4]*0.568;
	        
	       E[a]=E[a+3]*D[a][b][c];
	        
	       D[a][b][c]=D[a+5][b+5][c+4]*C[a][b];
	        
	       C[a][b]=B[a]+A[a]*E[a];
	       E[a]=B[a+1]*C[a][b]+E[a];
	        
	       double var_a=E[a]/0.065;
	       double var_b=E[a-2]-0.966;
	      }

    return 0;
}