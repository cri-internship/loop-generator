#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(40, "random");
	double **A = create_two_dim_double(630, 570, "random");
	double *B = create_one_dim_double(910, "random");

	for (int c = 0; c < 567; c++)
	  for (int b = 0; b < 627; b++)
	    for (int a = 0; a < 627; a++)
	    {
	      
	      B[a]=B[a+4]+C[a];
	      
	      double var_a=A[a][b]*0.109;
	      double var_b=A[a+3][b+3]+0.68;
	    }

    return 0;
}