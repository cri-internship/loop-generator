#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(570, 610, "ones");
	float **A = create_two_dim_float(820, 80, "ones");

	for (int c = 5; c < 80; c++)
	  for (int b = 3; b < 570; b++)
	    for (int a = 3; a < 570; a++)
	    {
	      
	      B[a][b]=B[a-2][b-5]*0.301;
	      
	      A[a][b]=B[a][b];
	      A[a-1][b-5]=0.814;
	      
	      float var_a=A[a][b]*0.462;
	      float var_b=A[a-3][b-4]*0.134;
	      
	      float var_c=B[a][b]*0.24;
	      float var_d=B[a-2][b-2]/0.418;
	    }

    return 0;
}