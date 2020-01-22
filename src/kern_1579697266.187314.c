#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(840, "random");
	double **B = create_two_dim_double(200, 570, "random");
	double *D = create_one_dim_double(170, "random");
	double *C = create_one_dim_double(610, "random");

	for (int c = 4; c < 570; c++)
	  for (int b = 3; b < 170; b++)
	    for (int a = 3; a < 170; a++)
	    {
	      
	      B[a][b]=B[a-3][b-4]-A[a]/C[a]*0.314;
	      
	      A[a]=C[a]+B[a][b]/D[a];
	      C[a]=B[a][b]*D[a];
	      
	      double var_a=D[a]*0.778;
	      double var_b=D[a-3]*0.63;
	      
	      double var_c=A[a]/0.743;
	      double var_d=A[a]-0.331;
	    }

    return 0;
}