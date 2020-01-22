#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(250, 340, "ones");
	double ***B = create_three_dim_double(690, 140, 890, "ones");

	for (int d = 5; d < 890; d++)
	  for (int c = 5; c < 140; c++)
	    for (int b = 2; b < 245; b++)
	      for (int a = 2; a < 245; a++)
	      {
	        
	       B[a][b][c]=B[a-2][b-5][c-5]-A[a][b];
	        
	       A[a][b]=A[a+4][b+3]/0.62;
	        
	       double var_a=A[a][b]+0.026;
	       double var_b=A[a+5][b+3]+0.279;
	      }

    return 0;
}