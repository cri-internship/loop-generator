#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(90, "zeros");
	double ***A = create_three_dim_double(540, 920, 570, "zeros");

	for (int a = 4; a < 89; a++)
	{
	  
	    A[a][a][a]=A[a-2][a-3][a]+B[a];
	  
	    B[a]=B[a-2]*0.439;
	  
	    A[a][a][a]=A[a][a+2][a+1]*B[a];
	  
	    B[a]=B[a+1]/A[a][a][a];
	}

    return 0;
}