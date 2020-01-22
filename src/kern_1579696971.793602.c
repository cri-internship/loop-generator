#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(900, 650, "ones");
	float **B = create_two_dim_float(910, 790, "ones");
	float ***D = create_three_dim_float(140, 590, 40, "ones");
	float **C = create_two_dim_float(640, 910, "ones");

	for (int b = 3; b < 586; b++)
	  for (int a = 1; a < 139; a++)
	  {
	    
	     D[a][b][a]=D[a+1][b+4][a]/0.086;
	    
	     C[a][b]=C[a][b]*A[a][b]-D[a][b][a];
	     A[a][b]=C[a-1][b-3]/B[a][b];
	  }

    return 0;
}