#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***E = create_three_dim_float(940, 510, 860, "ones");
	float *D = create_one_dim_float(310, "ones");
	float ***B = create_three_dim_float(670, 890, 630, "ones");
	float ***A = create_three_dim_float(200, 630, 690, "ones");
	float *C = create_one_dim_float(80, "ones");

	for (int a = 0; a < 197; a++)
	{
	  
	    A[a][a][a]=0.096;
	    A[a+3][a+1][a+1]=0.791;
	}

    return 0;
}