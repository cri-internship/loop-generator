#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(720, 200, "random");
	float ***A = create_three_dim_float(160, 110, 300, "random");

	for (int a = 5; a < 160; a++)
	{
	  
	    A[a][a][a]=A[a-5][a-3][a-4]+0.094;
	  
	    B[a][a]=B[a-4][a-2]*0.929;
	  
	    B[a][a]=B[a+4][a]*0.448;
	  
	    B[a][a]=B[a+3][a+5]-A[a][a][a];
	  
	    float var_a=B[a][a]/0.957;
	    float var_b=B[a+4][a+2]/0.07;
	}

    return 0;
}