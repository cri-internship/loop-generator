#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(550, 480, 170, "zeros");
	float ***C = create_three_dim_float(850, 870, 290, "zeros");
	float *B = create_one_dim_float(260, "zeros");

	for (int a = 4; a < 550; a++)
	{
	  
	    A[a][a][a]=0.164;
	    A[a-4][a][a-3]=0.814;
	}

    return 0;
}