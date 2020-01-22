#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(490, "random");
	double *A = create_one_dim_double(30, "random");
	double ***B = create_three_dim_double(670, 430, 290, "random");

	for (int a = 1; a < 25; a++)
	{
	  
	    C[a]=C[a+2]+B[a][a][a];
	  
	    A[a]=A[a+5]*0.202;
	  
	    C[a]=A[a]*0.993;
	  
	    A[a]=C[a];
	  
	    B[a][a][a]=C[a]/0.25+A[a];
	    C[a]=C[a+3]-B[a][a][a]/A[a];
	}

    return 0;
}