#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(390, 540, "ones");
	float **D = create_two_dim_float(170, 580, "ones");
	float **A = create_two_dim_float(340, 240, "ones");
	float *C = create_one_dim_float(930, "ones");
	float *E = create_one_dim_float(780, "ones");

	for (int b = 4; b < 240; b++)
	  for (int a = 5; a < 340; a++)
	  {
	    
	     A[a][b]=A[a-5][b-4]/D[a][b];
	    
	     E[a]=E[a+4]-A[a][b]*C[a]+B[a][b]/B[a][b];
	  }

    return 0;
}