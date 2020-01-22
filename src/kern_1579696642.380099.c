#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(980, 300, "random");
	double ***A = create_three_dim_double(920, 860, 750, "random");

	for (int d = 0; d < 297; d++)
	  for (int c = 0; c < 979; c++)
	    for (int b = 0; b < 979; b++)
	      for (int a = 0; a < 979; a++)
	      {
	        
	       B[a][b]=0.193;
	       B[a+1][b+3]=0.408;
	      }

    return 0;
}