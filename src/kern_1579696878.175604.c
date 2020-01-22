#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(960, "ones");
	float **E = create_two_dim_float(380, 890, "ones");
	float *B = create_one_dim_float(650, "ones");
	float *D = create_one_dim_float(880, "ones");
	float *A = create_one_dim_float(590, "ones");

	for (int a = 5; a < 375; a++)
	{
	  
	    E[a][a]=E[a-5][a-1]/A[a]*D[a];
	  
	    E[a][a]=E[a+5][a]/0.47;
	  
	    C[a]=0.451;
	    C[a-1]=0.482;
	  
	    C[a]=0.217;
	}

    return 0;
}