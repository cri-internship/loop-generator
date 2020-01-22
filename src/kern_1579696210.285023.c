#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(100, 510, 180, "zeros");
	float **A = create_two_dim_float(570, 740, "zeros");
	float **D = create_two_dim_float(500, 320, "zeros");
	float **E = create_two_dim_float(360, 730, "zeros");
	float *B = create_one_dim_float(130, "zeros");

	for (int b = 0; b < 736; b++)
	  for (int a = 0; a < 565; a++)
	  {
	    
	     A[a][b]=1.0;
	     A[a+5][b+4]=0.945;
	  }

    return 0;
}