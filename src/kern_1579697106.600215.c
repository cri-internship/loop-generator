#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***D = create_three_dim_float(110, 860, 630, "random");
	float *A = create_one_dim_float(910, "random");
	float ***B = create_three_dim_float(30, 540, 850, "random");
	float *C = create_one_dim_float(910, "random");

	for (int b = 0; b < 910; b++)
	  for (int a = 0; a < 910; a++)
	  {
	    
	     C[a]=D[a][b][a];
	     C[a]=A[a]*B[a][b][a]+B[a][b][a];
	  }

    return 0;
}