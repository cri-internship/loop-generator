#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(330, 300, "ones");
	double *A = create_one_dim_double(820, "ones");

	for (int a = 4; a < 326; a++)
	{
	  
	    A[a]=A[a-1]+B[a][a];
	  
	    B[a][a]=B[a][a-1]-0.322;
	  
	    B[a][a]=B[a-3][a-3]/0.621;
	  
	    B[a][a]=B[a][a+3]/A[a];
	  
	    B[a][a]=B[a+4][a]*0.494;
	  
	    A[a]=B[a][a];
	}

    return 0;
}