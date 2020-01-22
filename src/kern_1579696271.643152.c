#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(420, 170, "zeros");
	float **A = create_two_dim_float(640, 760, "zeros");

	for (int b = 0; b < 166; b++)
	  for (int a = 0; a < 418; a++)
	  {
	    
	     B[a][b]=B[a+2][b+4]/0.643;
	  }

    return 0;
}