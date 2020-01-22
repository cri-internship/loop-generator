#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(560, 130, 90, "ones");
	float *A = create_one_dim_float(410, "ones");
	float **C = create_two_dim_float(900, 760, "ones");
	float ***D = create_three_dim_float(100, 260, 790, "ones");

	for (int b = 0; b < 758; b++)
	  for (int a = 0; a < 899; a++)
	  {
	    
	     C[a][b]=C[a+1][b+2]+B[a][b][a]*A[a]-D[a][b][a];
	  }

    return 0;
}