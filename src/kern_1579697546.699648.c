#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(190, "zeros");
	float ***C = create_three_dim_float(220, 930, 720, "zeros");
	float *D = create_one_dim_float(610, "zeros");
	float ***A = create_three_dim_float(890, 930, 780, "zeros");

	for (int b = 0; b < 190; b++)
	  for (int a = 0; a < 190; a++)
	  {
	    
	     B[a]=0.94;
	     B[a]=0.923;
	    
	     float var_a=D[a]/0.851;
	     float var_b=D[a]-0.706;
	  }

    return 0;
}