#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(390, "random");
	double *B = create_one_dim_double(910, "random");
	double *A = create_one_dim_double(1000, "random");

	for (int c = 5; c < 390; c++)
	  for (int b = 5; b < 390; b++)
	    for (int a = 5; a < 390; a++)
	    {
	      
	      C[a]=C[a-5]-A[a]*B[a];
	    }

    return 0;
}