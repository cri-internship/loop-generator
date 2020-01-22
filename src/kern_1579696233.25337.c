#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(410, 700, 930, "random");
	double **B = create_two_dim_double(180, 770, "random");

	for (int d = 2; d < 930; d++)
	  for (int c = 4; c < 700; c++)
	    for (int b = 4; b < 179; b++)
	      for (int a = 4; a < 179; a++)
	      {
	        
	       A[a][b][c]=A[a-4][b-4][c-2]*0.15;
	        
	       B[a][b]=B[a+1][b+4]-0.516;
	      }

    return 0;
}