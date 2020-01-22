#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(700, 880, "ones");
	float **D = create_two_dim_float(270, 350, "ones");
	float **C = create_two_dim_float(690, 240, "ones");
	float **B = create_two_dim_float(330, 700, "ones");

	for (int a = 0; a < 687; a++)
	{
	  
	    C[a][a]=C[a+3][a+1]-0.223;
	  
	    A[a][a]=0.214;
	    A[a+3][a+1]=0.574;
	}

    return 0;
}