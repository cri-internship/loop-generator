#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(260, 740, "zeros");
	float *C = create_one_dim_float(150, "zeros");
	float *A = create_one_dim_float(450, "zeros");

	for (int c = 0; c < 740; c++)
	  for (int b = 2; b < 260; b++)
	    for (int a = 2; a < 260; a++)
	    {
	      
	      B[a][b]=0.912;
	      B[a-2][b]=0.352;
	    }

    return 0;
}