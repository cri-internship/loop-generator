#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(400, 480, "zeros");
	float **A = create_two_dim_float(780, 580, "zeros");

	for (int d = 0; d < 477; d++)
	  for (int c = 0; c < 398; c++)
	    for (int b = 0; b < 398; b++)
	      for (int a = 0; a < 398; a++)
	      {
	        
	       B[a][b]=B[a+2][b+3]*0.722;
	        
	       B[a][b]=B[a+2][b]+A[a][b];
	        
	       A[a][b]=A[a][b]-B[a][b];
	       B[a][b]=A[a+4][b+4]+0.585;
	      }

    return 0;
}