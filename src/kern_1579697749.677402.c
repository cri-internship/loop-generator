#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(590, 850, "random");
	double *A = create_one_dim_double(550, "random");

	for (int d = 0; d < 846; d++)
	  for (int c = 4; c < 550; c++)
	    for (int b = 4; b < 550; b++)
	      for (int a = 4; a < 550; a++)
	      {
	        
	       A[a]=0.335;
	       A[a-4]=B[a][b];
	        
	       double var_a=B[a][b]*0.574;
	       double var_b=B[a+4][b+4]-0.966;
	      }

    return 0;
}