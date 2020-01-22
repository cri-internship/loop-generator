#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(970, "zeros");
	double ***B = create_three_dim_double(140, 50, 720, "zeros");

	for (int a = 3; a < 135; a++)
	{
	  
	    A[a]=A[a-2]-0.588;
	  
	    B[a][a][a]=0.172;
	    B[a+1][a+1][a+5]=0.833;
	  
	    B[a][a][a]=0.285;
	  
	    A[a]=0.122;
	}

    return 0;
}