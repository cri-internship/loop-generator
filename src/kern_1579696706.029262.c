#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(860, "random");
	double ***C = create_three_dim_double(680, 340, 90, "random");
	double **B = create_two_dim_double(690, 410, "random");

	for (int a = 5; a < 680; a++)
	{
	  
	    B[a][a]=B[a-2][a-5]-A[a];
	  
	    B[a][a]=B[a-3][a-3]/0.993;
	  
	    C[a][a][a]=C[a-1][a-1][a]+0.494;
	  
	    B[a][a]=B[a-5][a-2]*0.792;
	  
	    B[a][a]=C[a][a][a]+0.483;
	    C[a][a][a]=C[a-1][a][a-4]/A[a]*B[a][a];
	}

    return 0;
}