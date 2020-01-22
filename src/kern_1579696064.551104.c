#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(770, 500, "zeros");
	double ***A = create_three_dim_double(960, 920, 150, "zeros");

	for (int d = 0; d < 150; d++)
	  for (int c = 4; c < 500; c++)
	    for (int b = 1; b < 770; b++)
	      for (int a = 1; a < 770; a++)
	      {
	        
	       A[a][b][c]=A[a][b-4][c]+0.374;
	        
	       B[a][b]=0.806;
	       B[a-1][b-1]=0.074;
	      }

    return 0;
}