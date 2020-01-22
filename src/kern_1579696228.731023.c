#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(660, 330, "zeros");

	for (int a = 5; a < 660; a++)
	{
	  
	    float var_a=A[a][a]*0.227;
	    float var_b=A[a-5][a-4]-0.638;
	  
	    float var_c=A[a][a]+0.454;
	    float var_d=A[a-2][a-5]+0.647;
	}

    return 0;
}