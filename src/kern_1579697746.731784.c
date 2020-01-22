#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(540, "ones");
	float *C = create_one_dim_float(340, "ones");
	float **D = create_two_dim_float(850, 630, "ones");
	float *A = create_one_dim_float(320, "ones");

	for (int a = 0; a < 320; a++)
	{
	  
	    B[a]=B[a+2]/C[a]-A[a];
	  
	    D[a][a]=D[a][a+4]/0.415;
	  
	    C[a]=B[a];
	    C[a+5]=D[a][a]*0.614;
	  
	    C[a]=D[a][a]+B[a]*A[a];
	  
	    A[a]=0.007;
	    A[a]=0.879;
	}

    return 0;
}