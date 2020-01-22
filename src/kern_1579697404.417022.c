#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(510, 390, 200, "ones");
	float *B = create_one_dim_float(360, "ones");

	for (int b = 4; b < 387; b++)
	  for (int a = 5; a < 360; a++)
	  {
	    
	     A[a][b][a]=A[a+1][b+3][a+3]-B[a];
	    
	     A[a][b][a]=0.96;
	    
	     B[a]=0.047;
	     B[a-1]=0.503;
	  }

    return 0;
}