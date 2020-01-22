#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(60, 270, 480, "zeros");
	float *B = create_one_dim_float(590, "zeros");

	for (int b = 3; b < 270; b++)
	  for (int a = 2; a < 60; a++)
	  {
	    
	     B[a]=B[a+2]+A[a][b][a];
	    
	     A[a][b][a]=A[a][b][a]-B[a];
	     B[a]=A[a-2][b-3][a-1]*B[a];
	  }

    return 0;
}