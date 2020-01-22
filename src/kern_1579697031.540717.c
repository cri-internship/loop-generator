#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(930, 930, "zeros");
	float *A = create_one_dim_float(750, "zeros");

	for (int a = 5; a < 745; a++)
	{
	  
	    A[a]=A[a-3]-0.766;
	  
	    A[a]=A[a-5]+0.789;
	  
	    float  var_a=A[a]-0.943;
	  
	    B[a][a]=B[a][a+4]/0.269;
	  
	    B[a][a]=0.39;
	  
	    A[a]=B[a][a]+A[a];
	    B[a][a]=B[a+4][a+4]+A[a];
	  
	    A[a]=A[a]+B[a][a];
	    A[a]=A[a+5]*B[a][a];
	}

    return 0;
}