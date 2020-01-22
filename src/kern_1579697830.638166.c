#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(370, 290, 250, "zeros");
	double ***A = create_three_dim_double(740, 220, 320, "zeros");

	for (int a = 5; a < 370; a++)
	{
	  
	    B[a][a][a]=B[a][a][a-2]*0.979;
	  
	    A[a][a][a]=A[a-3][a-3][a-3]/0.77;
	  
	    B[a][a][a]=B[a-5][a][a-2]/A[a][a][a];
	  
	    A[a][a][a]=0.947;
	  
	    A[a][a][a]=A[a][a][a]-0.276;
	    B[a][a][a]=A[a-4][a-5][a-1]+B[a][a][a];
	}

    return 0;
}