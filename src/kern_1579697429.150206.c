#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(370, 630, "ones");
	float *A = create_one_dim_float(800, "ones");
	float ***B = create_three_dim_float(420, 740, 30, "ones");
	float **D = create_two_dim_float(40, 380, "ones");

	for (int b = 0; b < 626; b++)
	  for (int a = 0; a < 367; a++)
	  {
	    
	     C[a][b]=C[a+3][b+4]/A[a];
	  }

    return 0;
}