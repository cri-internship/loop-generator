#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(970, 660, 180, "random");
	float **B = create_two_dim_float(430, 700, "random");

	for (int a = 5; a < 425; a++)
	{
	  
	    B[a][a]=B[a+2][a+4]*A[a][a][a];
	  
	    B[a][a]=B[a+3][a+1]/0.522;
	  
	    float var_a=A[a][a][a]+0.996;
	    float var_b=A[a][a][a+3]/0.818;
	  
	    float var_c=A[a][a][a]/0.611;
	    float var_d=A[a][a-4][a-5]*0.958;
	}

    return 0;
}