#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(350, 290, 180, "ones");
	float *B = create_one_dim_float(160, "ones");

	for (int b = 3; b < 286; b++)
	  for (int a = 3; a < 159; a++)
	  {
	    
	     B[a]=B[a+1]-0.51;
	    
	     A[a][b][a]=0.504;
	     A[a-2][b-3][a-1]=0.22;
	    
	     A[a][b][a]=0.494;
	    
	     B[a]=A[a][b][a]*B[a];
	     A[a][b][a]=A[a+3][b+4][a+4]+0.215;
	  }

    return 0;
}