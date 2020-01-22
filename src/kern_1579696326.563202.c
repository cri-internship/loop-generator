#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(320, 980, 630, "ones");
	float *B = create_one_dim_float(840, "ones");

	for (int b = 5; b < 840; b++)
	  for (int a = 5; a < 840; a++)
	  {
	    
	     B[a]=B[a-4]*0.864;
	    
	     A[a][b][a]=B[a]/0.234;
	     B[a]=B[a-5]+A[a][b][a];
	  }

    return 0;
}