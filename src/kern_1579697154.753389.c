#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(150, 110, 160, "ones");
	double *B = create_one_dim_double(170, "ones");

	for (int a = 5; a < 146; a++)
	{
	  
	    A[a][a][a]=A[a-2][a-2][a-1]*0.463;
	  
	    A[a][a][a]=A[a+4][a+3][a+3]/B[a];
	  
	    B[a]=A[a][a][a];
	    B[a+5]=0.441;
	  
	    A[a][a][a]=A[a][a][a]*0.561;
	    B[a]=A[a][a+2][a+3]-B[a];
	  
	    A[a][a][a]=A[a][a][a]/B[a];
	    A[a][a][a]=A[a-2][a-4][a-5]-B[a];
	}

    return 0;
}