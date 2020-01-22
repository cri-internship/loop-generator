#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(890, 320, "ones");
	double *A = create_one_dim_double(220, "ones");

	for (int a = 4; a < 220; a++)
	{
	  
	    B[a][a]=B[a-2][a-2]*0.405;
	  
	    A[a]=A[a-4]-0.17;
	  
	    float  var_a=A[a]-0.862;
	  
	    A[a]=0.851;
	  
	    A[a]=A[a]*B[a][a];
	    B[a][a]=A[a-1]-0.529;
	}

    return 0;
}