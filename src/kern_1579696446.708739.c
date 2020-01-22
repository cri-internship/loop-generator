#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(970, "zeros");
	float ***B = create_three_dim_float(700, 590, 520, "zeros");

	for (int b = 0; b < 588; b++)
	  for (int a = 0; a < 695; a++)
	  {
	    
	     B[a][b][a]=B[a+2][b+2][a+5]-0.929;
	  }

    return 0;
}