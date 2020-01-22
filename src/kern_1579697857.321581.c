#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(360, 460, 120, "ones");
	double ***C = create_three_dim_double(980, 990, 660, "ones");
	double ***B = create_three_dim_double(450, 630, 30, "ones");

	for (int a = 3; a < 355; a++)
	{
	  
	    C[a][a][a]=C[a+5][a+1][a+4]*B[a][a][a]/A[a][a][a];
	  
	    A[a][a][a]=A[a+1][a+5][a+1]+C[a][a][a]/0.982;
	  
	    C[a][a][a]=0.586;
	  
	    A[a][a][a]=0.735;
	  
	    C[a][a][a]=A[a][a][a]/0.733;
	    A[a][a][a]=A[a][a-3][a-1]*C[a][a][a];
	}

    return 0;
}