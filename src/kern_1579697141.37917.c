#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(780, 990, "ones");
	float ***A = create_three_dim_float(520, 310, 40, "ones");

	for (int a = 5; a < 520; a++)
	{
	  
	    A[a][a][a]=0.397;
	    A[a-3][a-2][a-5]=0.457;
	  
	    float var_a=B[a][a]*0.724;
	    float var_b=B[a-3][a-4]*0.516;
	  
	    float var_c=A[a][a][a]-0.452;
	    float var_d=A[a-4][a-4][a-4]-0.877;
	}

    return 0;
}