#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(580, "zeros");
	float **B = create_two_dim_float(430, 250, "zeros");
	float *D = create_one_dim_float(480, "zeros");
	float ***A = create_three_dim_float(280, 120, 980, "zeros");

	for (int c = 4; c < 250; c++)
	  for (int b = 3; b < 430; b++)
	    for (int a = 3; a < 430; a++)
	    {
	      
	      B[a][b]=B[a-3][b-4]/D[a];
	    }

    return 0;
}