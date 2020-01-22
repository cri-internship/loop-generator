#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(230, 10, 880, "zeros");
	float **C = create_two_dim_float(890, 980, "zeros");
	float **D = create_two_dim_float(630, 70, "zeros");
	float *B = create_one_dim_float(830, "zeros");
	float *E = create_one_dim_float(1000, "zeros");

	for (int a = 0; a < 830; a++)
	{
	  
	    float var_a=C[a][a]+0.329;
	    C[a][a]=0.784;
	  
	    B[a]=0.362;
	    B[a]=0.858;
	  
	    C[a][a]=0.028;
	}

    return 0;
}