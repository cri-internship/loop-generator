#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(470, "random");

	for (int a = 0; a < 465; a++)
	{
	  
	    float var_a=A[a]-0.593;
	    float var_b=A[a+2]-0.093;
	  
	    float var_c=A[a]+0.092;
	    float var_d=A[a+5]+0.319;
	}

    return 0;
}