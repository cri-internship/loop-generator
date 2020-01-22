#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(120, 820, 300, "ones");
	double ***A = create_three_dim_double(220, 630, 570, "ones");
	double **B = create_two_dim_double(270, 10, "ones");
	double *D = create_one_dim_double(120, "ones");

	for (int d = 0; d < 570; d++)
	  for (int c = 0; c < 629; c++)
	    for (int b = 0; b < 218; b++)
	      for (int a = 0; a < 218; a++)
	      {
	        
	       A[a][b][c]=A[a+2][b+1][c]/0.529;
	      }

    return 0;
}