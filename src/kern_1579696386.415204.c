#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(110, 670, "ones");
	float ***B = create_three_dim_float(760, 340, 230, "ones");

	for (int a = 0; a < 107; a++)
	{
	  
	    A[a][a]=A[a+3][a]*B[a][a][a];
	  
	    B[a][a][a]=B[a+4][a+5][a+4]/0.034;
	  
	    B[a][a][a]=B[a+2][a+3][a+5]-0.484;
	  
	    float var_a=A[a][a]+0.605;
	    float var_b=A[a+2][a+1]*0.858;
	}

    return 0;
}