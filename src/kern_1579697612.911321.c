#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(270, "ones");
	float ***C = create_three_dim_float(180, 50, 270, "ones");
	float ***A = create_three_dim_float(620, 360, 60, "ones");

	for (int a = 0; a < 176; a++)
	{
	  
	    C[a][a][a]=C[a+1][a+4][a]+0.887;
	  
	    B[a]=0.365;
	    B[a+5]=0.12;
	}

    return 0;
}