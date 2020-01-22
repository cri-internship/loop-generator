#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(640, 180, "zeros");
	float ***A = create_three_dim_float(540, 760, 40, "zeros");
	float **D = create_two_dim_float(280, 150, "zeros");
	float *C = create_one_dim_float(330, "zeros");
	float *E = create_one_dim_float(20, "zeros");

	for (int a = 0; a < 18; a++)
	{
	  
	    E[a]=0.47;
	    E[a+2]=0.182;
	}

    return 0;
}