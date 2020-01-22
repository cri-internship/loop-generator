#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(650, 460, "ones");
	double *A = create_one_dim_double(290, "ones");
	double *B = create_one_dim_double(70, "ones");

	for (int c = 5; c < 460; c++)
	  for (int b = 1; b < 650; b++)
	    for (int a = 1; a < 650; a++)
	    {
	      
	      C[a][b]=C[a-1][b-5]-0.303;
	    }

    return 0;
}