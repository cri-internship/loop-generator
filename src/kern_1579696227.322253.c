#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(940, 270, "zeros");
	float *C = create_one_dim_float(430, "zeros");
	float ***A = create_three_dim_float(110, 180, 150, "zeros");

	for (int b = 5; b < 176; b++)
	  for (int a = 2; a < 106; a++)
	  {
	    
	     C[a]=C[a+3]/0.969;
	    
	     B[a][b]=0.489;
	     B[a-2][b-5]=0.487;
	    
	     C[a]=A[a][b][a]*C[a]/B[a][b];
	     B[a][b]=A[a+4][b+4][a+2]-C[a];
	  }

    return 0;
}