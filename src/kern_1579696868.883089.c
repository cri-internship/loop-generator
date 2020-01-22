#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(870, 930, "zeros");
	float ***A = create_three_dim_float(550, 790, 180, "zeros");
	float ***C = create_three_dim_float(610, 320, 950, "zeros");

	for (int b = 0; b < 318; b++)
	  for (int a = 0; a < 545; a++)
	  {
	    
	     B[a][b]=B[a+4][b+2]/0.696;
	    
	     B[a][b]=B[a+1][b+5]-0.944;
	    
	     C[a][b][a]=C[a][b+2][a+3]+0.662;
	    
	     A[a][b][a]=0.745;
	     A[a+5][b+1][a+2]=0.393;
	  }

    return 0;
}