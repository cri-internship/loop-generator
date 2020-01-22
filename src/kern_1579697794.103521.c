#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(600, "zeros");
	float ***A = create_three_dim_float(350, 520, 630, "zeros");

	for (int b = 3; b < 520; b++)
	  for (int a = 4; a < 350; a++)
	  {
	    
	     B[a]=B[a+3]*A[a][b][a];
	    
	     B[a]=A[a][b][a]/B[a];
	     A[a][b][a]=A[a-3][b-3][a-3]/B[a];
	    
	     B[a]=A[a][b][a]*0.814;
	     B[a]=A[a-4][b-1][a-3]-B[a];
	  }

    return 0;
}