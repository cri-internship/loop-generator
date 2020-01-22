#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(740, 500, "zeros");
	float **A = create_two_dim_float(240, 730, "zeros");

	for (int b = 0; b < 496; b++)
	  for (int a = 0; a < 735; a++)
	  {
	    
	     B[a][b]=B[a+5][b+4]/0.8;
	  }

    return 0;
}