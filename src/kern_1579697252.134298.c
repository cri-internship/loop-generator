#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(340, 320, 200, "zeros");
	float **D = create_two_dim_float(640, 250, "zeros");
	float ***C = create_three_dim_float(570, 110, 790, "zeros");
	float ***A = create_three_dim_float(600, 30, 550, "zeros");
	float *E = create_one_dim_float(390, "zeros");

	for (int b = 4; b < 110; b++)
	  for (int a = 3; a < 570; a++)
	  {
	    
	     C[a][b][a]=C[a-3][b-4][a-3]+0.34;
	  }

    return 0;
}