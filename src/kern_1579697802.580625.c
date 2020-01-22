#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(250, 740, "zeros");
	float ***A = create_three_dim_float(930, 940, 770, "zeros");

	for (int a = 5; a < 250; a++)
	{
	  
	    A[a][a][a]=0.427;
	    A[a-5][a-1][a]=0.746;
	  
	    float var_a=A[a][a][a]*0.295;
	    float var_b=A[a+1][a][a+3]*0.295;
	  
	    float var_c=B[a][a]-0.159;
	    float var_d=B[a-1][a-1]/0.218;
	  
	    float var_e=B[a][a]+0.759;
	    float var_f=B[a-3][a-1]/0.134;
	}

    return 0;
}