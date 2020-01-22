#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(480, 110, 590, "zeros");
	float *C = create_one_dim_float(780, "zeros");
	float ***B = create_three_dim_float(650, 10, 450, "zeros");
	float *D = create_one_dim_float(90, "zeros");

	for (int b = 3; b < 7; b++)
	  for (int a = 4; a < 85; a++)
	  {
	    
	     A[a][b][a]=A[a-4][b-3][a-4]/0.759;
	    
	     D[a]=D[a+1]*0.147;
	    
	     D[a]=0.844;
	    
	     B[a][b][a]=0.846+A[a][b][a];
	     B[a+2][b+3][a]=C[a]-D[a];
	  }

    return 0;
}