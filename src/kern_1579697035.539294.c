#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(450, "zeros");
	float **B = create_two_dim_float(780, 780, "zeros");
	float ***A = create_three_dim_float(720, 480, 850, "zeros");

	for (int b = 5; b < 480; b++)
	  for (int a = 5; a < 450; a++)
	  {
	    
	     A[a][b][a]=A[a-5][b-5][a-2]+B[a][b]*C[a];
	    
	     C[a]=A[a][b][a];
	     B[a][b]=C[a]-A[a][b][a];
	  }

    return 0;
}