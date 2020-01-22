#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***D = create_three_dim_float(70, 110, 350, "zeros");
	float ***B = create_three_dim_float(920, 810, 910, "zeros");
	float *A = create_one_dim_float(820, "zeros");
	float **C = create_two_dim_float(300, 750, "zeros");
	float *E = create_one_dim_float(640, "zeros");

	for (int a = 0; a < 640; a++)
	{
	  
	    E[a]=0.367;
	    float  var_a=E[a]*0.496;
	}

    return 0;
}