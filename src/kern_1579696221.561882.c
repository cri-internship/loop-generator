#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(300, "random");
	double *B = create_one_dim_double(650, "random");
	double *C = create_one_dim_double(970, "random");

	for (int c = 5; c < 300; c++)
	  for (int b = 5; b < 300; b++)
	    for (int a = 5; a < 300; a++)
	    {
	      
	      C[a]=C[a-1]*B[a]+A[a];
	      
	      A[a]=A[a-5]*C[a]-B[a];
	      
	      B[a]=B[a+5]-0.558;
	      
	      C[a]=0.493;
	      
	      B[a]=0.488;
	    }

    return 0;
}