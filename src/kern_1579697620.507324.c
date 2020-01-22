#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(770, "random");
	double **A = create_two_dim_double(820, 220, "random");
	double *E = create_one_dim_double(920, "random");
	double *C = create_one_dim_double(150, "random");
	double *B = create_one_dim_double(880, "random");

	for (int b = 2; b < 149; b++)
	  for (int a = 2; a < 149; a++)
	  {
	    
	     E[a]=E[a-2]-0.539;
	    
	     C[a]=C[a+1]-0.974;
	    
	     C[a]=D[a]-B[a]/E[a]*A[a][b];
	     E[a]=D[a+3]/C[a]-A[a][b]*0.714;
	  }

    return 0;
}