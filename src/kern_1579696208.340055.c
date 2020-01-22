#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(880, "random");
	double **B = create_two_dim_double(350, 380, "random");
	double ***A = create_three_dim_double(510, 880, 40, "random");

	for (int a = 3; a < 345; a++)
	{
	  
	    A[a][a][a]=A[a][a-3][a-2]-C[a]+0.123;
	  
	    B[a][a]=0.585;
	    B[a-1][a-2]=0.061;
	  
	    A[a][a][a]=B[a][a];
	  
	    C[a]=B[a][a]-A[a][a][a]+A[a][a][a];
	    B[a][a]=B[a+4][a+5]+C[a];
	}

    return 0;
}