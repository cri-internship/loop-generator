#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(640, "zeros");
	float *C = create_one_dim_float(950, "zeros");
	float ***A = create_three_dim_float(10, 300, 20, "zeros");
	float **B = create_two_dim_float(250, 730, "zeros");

	for (int b = 2; b < 638; b++)
	  for (int a = 2; a < 638; a++)
	  {
	    
	     D[a]=D[a+2]-C[a]*B[a][b];
	    
	     C[a]=0.653;
	     C[a-2]=0.145;
	  }

    return 0;
}