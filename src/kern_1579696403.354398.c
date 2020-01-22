#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(540, 620, 330, "random");
	float ***A = create_three_dim_float(520, 490, 970, "random");

	for (int d = 4; d < 329; d++)
	  for (int c = 5; c < 487; c++)
	    for (int b = 5; b < 520; b++)
	      for (int a = 5; a < 520; a++)
	      {
	        
	       B[a][b][c]=B[a-5][b-2][c-2]/0.92;
	        
	       B[a][b][c]=B[a-5][b-5][c-4]/0.802;
	        
	       A[a][b][c]=A[a][b+3][c]-0.748;
	      }

    return 0;
}