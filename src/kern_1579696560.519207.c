#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(750, "ones");
	double **D = create_two_dim_double(910, 770, "ones");
	double **B = create_two_dim_double(170, 570, "ones");
	double **A = create_two_dim_double(590, 640, "ones");

	for (int c = 4; c < 566; c++)
	  for (int b = 4; b < 166; b++)
	    for (int a = 4; a < 166; a++)
	    {
	      
	      D[a][b]=D[a-4][b-4]-0.305;
	      
	      B[a][b]=B[a+4][b+4]/C[a]*D[a][b]+A[a][b];
	      
	      C[a]=B[a][b]/D[a][b]-B[a][b];
	      C[a-1]=D[a][b]+B[a][b]/A[a][b];
	      
	      double var_a=C[a]-0.799;
	      double var_b=C[a-4]/0.911;
	    }

    return 0;
}