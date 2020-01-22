#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(600, "ones");
	float ***B = create_three_dim_float(720, 30, 360, "ones");

	for (int b = 0; b < 26; b++)
	  for (int a = 4; a < 600; a++)
	  {
	    
	     A[a]=A[a-4]/0.901;
	    
	     B[a][b][a]=B[a+5][b+4][a]*0.094;
	  }

    return 0;
}