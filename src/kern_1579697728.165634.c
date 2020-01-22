#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(310, 530, "random");
	double **A = create_two_dim_double(280, 480, "random");

	for (int a = 4; a < 280; a++)
	{
	  
	    B[a][a]=B[a-1][a]-0.655;
	  
	    A[a][a]=B[a][a]*A[a][a];
	    B[a][a]=B[a-4][a-4]*A[a][a];
	  
	    double var_a=A[a][a]/0.638;
	    double var_b=A[a][a-4]/0.529;
	  
	    B[a][a]=A[a][a]*B[a][a];
	    A[a][a]=A[a-2][a-2]*B[a][a];
	}

    return 0;
}