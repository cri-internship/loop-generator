#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(30, 740, "random");
	double **A = create_two_dim_double(740, 350, "random");

	for (int d = 5; d < 350; d++)
	  for (int c = 5; c < 30; c++)
	    for (int b = 5; b < 30; b++)
	      for (int a = 5; a < 30; a++)
	      {
	        
	       B[a][b]=B[a-2][b-5]*0.624;
	        
	       B[a][b]=B[a-2][b-2]+A[a][b];
	        
	       A[a][b]=B[a][b];
	       A[a+5][b]=B[a][b];
	        
	       double var_a=B[a][b]*0.071;
	       double var_b=B[a-1][b-4]+0.188;
	      }

    return 0;
}