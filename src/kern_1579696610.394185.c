#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(510, "random");
	double *B = create_one_dim_double(680, "random");
	double ***D = create_three_dim_double(10, 440, 590, "random");
	double *C = create_one_dim_double(40, "random");

	for (int c = 3; c < 40; c++)
	  for (int b = 3; b < 40; b++)
	    for (int a = 3; a < 40; a++)
	    {
	      
	      C[a]=C[a-3]*0.677;
	      
	      B[a]=B[a+5]-D[a][b][c]/A[a];
	    }

    return 0;
}