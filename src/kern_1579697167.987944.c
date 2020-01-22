#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(60, 320, "ones");
	double **A = create_two_dim_double(490, 400, "ones");

	for (int d = 5; d < 317; d++)
	  for (int c = 5; c < 58; c++)
	    for (int b = 5; b < 58; b++)
	      for (int a = 5; a < 58; a++)
	      {
	        
	       A[a][b]=A[a-5][b-3]+0.642;
	        
	       float  var_a=A[a][b]+0.777;
	        
	       A[a][b]=A[a-2][b-5]*B[a][b];
	        
	       B[a][b]=A[a][b]+B[a][b];
	       A[a][b]=A[a-4][b-2]-B[a][b];
	        
	       double var_b=B[a][b]-0.677;
	       double var_c=B[a+2][b+3]+0.889;
	      }

    return 0;
}