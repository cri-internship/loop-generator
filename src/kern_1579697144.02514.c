#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(210, 330, "zeros");

	for (int a = 0; a < 205; a++)
	{
	  
	    float var_a=A[a][a]+0.789;
	    float var_b=A[a+2][a+5]-0.285;
	  
	    float var_c=A[a][a]*0.443;
	    float var_d=A[a+4][a+2]-0.581;
	}

    return 0;
}