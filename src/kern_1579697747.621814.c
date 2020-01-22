#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(270, 760, 60, "zeros");
	float *A = create_one_dim_float(850, "zeros");

	for (int a = 0; a < 845; a++)
	{
	  
	    A[a]=A[a+5]+0.365;
	}

    return 0;
}