#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(440, "zeros");
	float ***D = create_three_dim_float(900, 660, 90, "zeros");
	float ***E = create_three_dim_float(20, 260, 980, "zeros");
	float *C = create_one_dim_float(930, "zeros");
	float *B = create_one_dim_float(550, "zeros");

	for (int a = 0; a < 929; a++)
	{
	  
	    C[a]=C[a+1]*0.236;
	}

    return 0;
}