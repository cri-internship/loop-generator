#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(920, 690, 290, "ones");
	float ***B = create_three_dim_float(720, 830, 230, "ones");

	for (int a = 5; a < 720; a++)
	{
	  
	    B[a][a][a]=B[a-5][a-3][a-2]*A[a][a][a];
	  
	    A[a][a][a]=0.711;
	    A[a-4][a-2][a-1]=0.986;
	  
	    B[a][a][a]=A[a][a][a]/0.919;
	    A[a][a][a]=A[a-1][a-4][a]*B[a][a][a];
	}

    return 0;
}