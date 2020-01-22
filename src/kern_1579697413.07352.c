#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(120, 640, "zeros");
	double *D = create_one_dim_double(610, "zeros");
	double *C = create_one_dim_double(880, "zeros");
	double *A = create_one_dim_double(820, "zeros");

	for (int c = 2; c < 640; c++)
	  for (int b = 5; b < 120; b++)
	    for (int a = 5; a < 120; a++)
	    {
	      
	      B[a][b]=B[a-2][b-1]+0.895;
	      
	      B[a][b]=B[a-5][b-2]*0.756;
	      
	      A[a]=A[a+5]*C[a]+B[a][b];
	      
	      A[a]=0.028;
	      
	      double var_a=D[a]/0.458;
	      double var_b=D[a+1]+0.999;
	    }

    return 0;
}