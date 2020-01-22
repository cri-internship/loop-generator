#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(660, "zeros");
	double *C = create_one_dim_double(600, "zeros");
	double ***A = create_three_dim_double(120, 440, 980, "zeros");

	for (int b = 0; b < 437; b++)
	  for (int a = 0; a < 116; a++)
	  {
	    
	     A[a][b][a]=A[a][b+3][a+4]/0.982;
	    
	     B[a]=C[a];
	     B[a+2]=A[a][b][a]*A[a][b][a];
	  }

    return 0;
}