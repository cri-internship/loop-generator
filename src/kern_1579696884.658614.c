#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(210, 450, "ones");
	float *C = create_one_dim_float(160, "ones");
	float ***A = create_three_dim_float(540, 330, 370, "ones");

	for (int b = 0; b < 330; b++)
	  for (int a = 3; a < 158; a++)
	  {
	    
	     A[a][b][a]=C[a];
	     A[a+1][b][a+5]=B[a][b];
	    
	     C[a]=0.748;
	     C[a+2]=0.161;
	    
	     A[a][b][a]=C[a]+A[a][b][a];
	     C[a]=C[a-3]-B[a][b];
	  }

    return 0;
}