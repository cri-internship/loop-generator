#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(980, "zeros");
	float **B = create_two_dim_float(720, 850, "zeros");
	float **D = create_two_dim_float(580, 620, "zeros");
	float ***C = create_three_dim_float(320, 420, 550, "zeros");

	for (int d = 0; d < 547; d++)
	  for (int c = 0; c < 418; c++)
	    for (int b = 0; b < 320; b++)
	      for (int a = 0; a < 320; a++)
	      {
	        
	       C[a][b][c]=C[a][b+2][c+3]*D[a][b];
	      }

    return 0;
}