#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(620, 500, "ones");
	float *C = create_one_dim_float(510, "ones");
	float **A = create_two_dim_float(210, 970, "ones");

	for (int c = 0; c < 499; c++)
	  for (int b = 0; b < 616; b++)
	    for (int a = 0; a < 616; a++)
	    {
	      
	      B[a][b]=B[a+3][b+1]/0.936;
	      
	      B[a][b]=B[a][b]*C[a]/0.496;
	      A[a][b]=B[a+4][b]/0.062+C[a];
	    }

    return 0;
}