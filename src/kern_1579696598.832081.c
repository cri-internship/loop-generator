#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(460, 290, "ones");
	float ***B = create_three_dim_float(410, 560, 450, "ones");
	float *A = create_one_dim_float(280, "ones");

	for (int b = 0; b < 559; b++)
	  for (int a = 0; a < 405; a++)
	  {
	    
	     B[a][b][a]=B[a+5][b+1][a]*0.285;
	  }

    return 0;
}