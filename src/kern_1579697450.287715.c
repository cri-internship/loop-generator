#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(920, 120, 750, "zeros");

	for (int d = 0; d < 746; d++)
	  for (int c = 5; c < 117; c++)
	    for (int b = 0; b < 916; b++)
	      for (int a = 0; a < 916; a++)
	      {
	        
	       double var_a=A[a][b][c]*0.089;
	       double var_b=A[a+4][b+3][c+4]*0.831;
	        
	       double var_c=A[a][b][c]-0.022;
	       double var_d=A[a][b-5][c]+0.013;
	      }

    return 0;
}