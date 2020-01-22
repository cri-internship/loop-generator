#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(320, 220, "ones");
	double **A = create_two_dim_double(580, 320, "ones");
	double **C = create_two_dim_double(450, 260, "ones");

	for (int a = 5; a < 445; a++)
	{
	  
	    C[a][a]=C[a-4][a-5]/A[a][a];
	  
	    C[a][a]=0.175;
	  
	    A[a][a]=C[a][a]-0.542;
	    B[a][a]=C[a-3][a-2]/B[a][a]+A[a][a];
	}

    return 0;
}