#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(100, 770, "random");
	double **A = create_two_dim_double(960, 900, "random");

	for (int d = 0; d < 770; d++)
	  for (int c = 3; c < 100; c++)
	    for (int b = 3; b < 100; b++)
	      for (int a = 3; a < 100; a++)
	      {
	        
	       double var_a=B[a][b]*0.195;
	       B[a][b]=0.668;
	        
	       B[a][b]=A[a][b];
	        
	       double var_b=A[a][b]*0.25;
	       double var_c=A[a][b+1]*0.239;
	      }

    return 0;
}