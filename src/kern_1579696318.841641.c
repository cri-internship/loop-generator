#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(740, "random");
	double ***C = create_three_dim_double(110, 620, 490, "random");
	double *B = create_one_dim_double(830, "random");

	for (int a = 5; a < 110; a++)
	{
	  
	    C[a][a][a]=C[a-5][a-2][a-2]*0.757;
	  
	    A[a]=A[a-5]/C[a][a][a]*0.756;
	  
	    C[a][a][a]=C[a][a][a]-A[a];
	    B[a]=C[a-4][a-3][a-3]*B[a]+A[a];
	  
	    A[a]=A[a]/B[a];
	    C[a][a][a]=A[a+2]-0.017;
	}

    return 0;
}