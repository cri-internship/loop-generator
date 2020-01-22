#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(440, 550, 460, "ones");
	float **B = create_two_dim_float(940, 200, "ones");

	for (int a = 5; a < 435; a++)
	{
	  
	    A[a][a][a]=A[a+2][a+1][a+1]*0.302;
	  
	    B[a][a]=0.833;
	    B[a][a-5]=0.465;
	  
	    A[a][a][a]=B[a][a];
	  
	    float var_a=A[a][a][a]*0.913;
	    float var_b=A[a-3][a-1][a-4]/0.464;
	  
	    float var_c=A[a][a][a]*0.896;
	    float var_d=A[a+3][a+2][a+4]*0.088;
	}

    return 0;
}