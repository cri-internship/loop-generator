#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(290, "ones");
	float ***B = create_three_dim_float(200, 610, 590, "ones");

	for (int b = 0; b < 285; b++)
	  for (int a = 0; a < 285; a++)
	  {
	    
	     A[a]=A[a+5]-0.013;
	    
	     A[a]=0.133;
	  }

    return 0;
}