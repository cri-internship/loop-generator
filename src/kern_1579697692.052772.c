#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(640, 680, "random");
	float *B = create_one_dim_float(250, "random");

	for (int b = 0; b < 678; b++)
	  for (int a = 0; a < 248; a++)
	  {
	    
	     A[a][b]=A[a+3][b+2]*B[a];
	    
	     B[a]=B[a+2]*A[a][b];
	  }

    return 0;
}