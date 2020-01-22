#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(410, 290, "random");
	double *E = create_one_dim_double(910, "random");
	double **D = create_two_dim_double(670, 240, "random");
	double **C = create_two_dim_double(480, 250, "random");
	double *B = create_one_dim_double(80, "random");

	for (int c = 2; c < 240; c++)
	  for (int b = 5; b < 80; b++)
	    for (int a = 5; a < 80; a++)
	    {
	      
	      D[a][b]=D[a-3][b-2]*0.262;
	      
	      B[a]=B[a-5]*0.707;
	      
	      A[a][b]=A[a-2][b-2]*0.82;
	      
	      double var_a=B[a]*0.51;
	      double var_b=B[a-3]+0.528;
	    }

    return 0;
}