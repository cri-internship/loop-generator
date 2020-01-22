#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(70, "random");
	float ***B = create_three_dim_float(40, 260, 630, "random");
	float *A = create_one_dim_float(770, "random");

	for (int b = 0; b < 260; b++)
	  for (int a = 5; a < 40; a++)
	  {
	    
	     A[a]=C[a]*B[a][b][a]-A[a];
	     C[a]=A[a]-B[a][b][a];
	    
	     C[a]=C[a+3]-0.025;
	    
	     C[a]=B[a][b][a]/C[a];
	     B[a][b][a]=B[a-4][b][a-5]/C[a];
	  }

    return 0;
}