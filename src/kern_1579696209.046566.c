#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(800, "random");
	float ***B = create_three_dim_float(710, 970, 940, "random");

	for (int a = 5; a < 706; a++)
	{
	  
	    A[a]=A[a-5]*B[a][a][a];
	  
	    float  var_a=A[a]-0.45;
	  
	    B[a][a][a]=0.3;
	    B[a+1][a+2][a+4]=0.955;
	  
	    B[a][a][a]=0.563;
	}

    return 0;
}