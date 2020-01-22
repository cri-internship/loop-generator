#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(730, 210, 950, "ones");
	float ***C = create_three_dim_float(110, 960, 720, "ones");
	float ***B = create_three_dim_float(860, 370, 480, "ones");
	float *D = create_one_dim_float(860, "ones");
	float ***E = create_three_dim_float(200, 950, 660, "ones");

	for (int a = 0; a < 728; a++)
	{
	  
	    A[a][a][a]=0.096;
	    A[a+2][a+1][a+2]=0.639;
	}

    return 0;
}