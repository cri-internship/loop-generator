#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(580, 480, 500, "ones");

	for (int d = 0; d < 495; d++)
	  for (int c = 0; c < 475; c++)
	    for (int b = 0; b < 578; b++)
	      for (int a = 0; a < 578; a++)
	      {
	        
	       A[a][b][c]=A[a][b+5][c+2]+0.765;
	        
	       double var_a=A[a][b][c]-0.664;
	       double var_b=A[a+2][b+4][c+5]+0.579;
	      }

    return 0;
}