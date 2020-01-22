#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(420, "zeros");
	double *E = create_one_dim_double(50, "zeros");
	double ***D = create_three_dim_double(590, 960, 460, "zeros");
	double *C = create_one_dim_double(530, "zeros");
	double **B = create_two_dim_double(460, 190, "zeros");

	for (int d = 0; d < 189; d++)
	  for (int c = 0; c < 458; c++)
	    for (int b = 0; b < 458; b++)
	      for (int a = 0; a < 458; a++)
	      {
	        
	       B[a][b]=B[a+2][b+1]/D[a][b][c]-E[a]+C[a]*0.428;
	        
	       double var_a=B[a][b]-0.976;
	       double var_b=B[a+1][b]/0.415;
	      }

    return 0;
}