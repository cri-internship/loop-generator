#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(640, "random");
	float **C = create_two_dim_float(180, 550, "random");
	float *A = create_one_dim_float(590, "random");
	float **B = create_two_dim_float(250, 360, "random");

	for (int b = 2; b < 550; b++)
	  for (int a = 5; a < 180; a++)
	  {
	    
	     A[a]=A[a-1]/B[a][b];
	    
	     C[a][b]=C[a-5][b-2]*A[a]-D[a]+D[a];
	    
	     D[a]=D[a+2]/0.813;
	    
	     D[a]=D[a+1]+C[a][b]/C[a][b];
	  }

    return 0;
}