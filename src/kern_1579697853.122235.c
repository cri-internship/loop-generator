#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(700, "zeros");
	float **C = create_two_dim_float(580, 350, "zeros");
	float ***A = create_three_dim_float(880, 680, 160, "zeros");
	float ***D = create_three_dim_float(40, 580, 190, "zeros");

	for (int b = 5; b < 580; b++)
	  for (int a = 5; a < 40; a++)
	  {
	    
	     D[a][b][a]=D[a-4][b-1][a-3]*0.408;
	    
	     D[a][b][a]=D[a-5][b-5][a]/0.367;
	  }

    return 0;
}