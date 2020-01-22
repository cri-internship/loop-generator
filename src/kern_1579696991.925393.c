#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(880, 770, 480, "random");
	double **B = create_two_dim_double(40, 470, "random");
	double **C = create_two_dim_double(60, 910, "random");

	for (int a = 0; a < 38; a++)
	{
	  
	    B[a][a]=B[a+1][a+2]*0.712;
	  
	    A[a][a][a]=A[a+5][a+5][a+2]-0.406;
	  
	    A[a][a][a]=A[a+4][a+3][a+4]-C[a][a];
	}

    return 0;
}