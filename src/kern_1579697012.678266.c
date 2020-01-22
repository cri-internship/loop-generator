#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(700, 330, "random");
	float **A = create_two_dim_float(750, 980, "random");

	for (int c = 4; c < 325; c++)
	  for (int b = 2; b < 697; b++)
	    for (int a = 2; a < 697; a++)
	    {
	      
	      B[a][b]=B[a+2][b+4]-0.994;
	      
	      B[a][b]=B[a+3][b+1]/A[a][b];
	      
	      A[a][b]=0.6;
	      A[a][b-2]=B[a][b];
	      
	      float var_a=A[a][b]/0.361;
	      float var_b=A[a+1][b+4]/0.362;
	      
	      B[a][b]=B[a][b]*A[a][b];
	      A[a][b]=B[a+2][b+5]/A[a][b];
	      
	      B[a][b]=A[a][b]/0.087;
	      B[a][b]=A[a-2][b-4]-0.279;
	    }

    return 0;
}