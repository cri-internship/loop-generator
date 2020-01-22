#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(910, "ones");
	float **A = create_two_dim_float(170, 470, "ones");
	float **C = create_two_dim_float(390, 460, "ones");

	for (int b = 0; b < 455; b++)
	  for (int a = 1; a < 165; a++)
	  {
	    
	     B[a]=B[a-1]/C[a][b];
	    
	     C[a][b]=C[a+4][b+5]/B[a]-A[a][b];
	    
	     A[a][b]=A[a+5][b+5]+0.776;
	    
	     B[a]=B[a+5]*0.672;
	    
	     float var_a=A[a][b]*0.571;
	     float var_b=A[a+5][b]/0.915;
	  }

    return 0;
}