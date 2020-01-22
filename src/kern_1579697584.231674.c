#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(650, 1000, "ones");
	float **B = create_two_dim_float(510, 660, "ones");
	float **C = create_two_dim_float(480, 420, "ones");

	for (int d = 4; d < 655; d++)
	  for (int c = 2; c < 507; c++)
	    for (int b = 2; b < 507; b++)
	      for (int a = 2; a < 507; a++)
	      {
	        
	       A[a][b]=0.165;
	       A[a+2][b+5]=0.186;
	        
	       B[a][b]=0.47;
	       B[a+3][b]=0.001;
	        
	       B[a][b]=A[a][b]+C[a][b];
	        
	       B[a][b]=A[a][b]-B[a][b];
	       A[a][b]=A[a-2][b-4]-C[a][b]/B[a][b];
	      }

    return 0;
}