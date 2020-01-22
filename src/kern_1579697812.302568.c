#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(730, 520, 270, "ones");
	float ***A = create_three_dim_float(490, 800, 950, "ones");
	float *C = create_one_dim_float(320, "ones");

	for (int a = 4; a < 320; a++)
	{
	  
	    B[a][a][a]=B[a+5][a+4][a+3]*0.912;
	  
	    B[a][a][a]=B[a+3][a+5][a]-0.94;
	  
	    C[a]=0.853;
	    C[a-4]=0.632;
	}

    return 0;
}