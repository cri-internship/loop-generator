#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(720, "zeros");
	float ***A = create_three_dim_float(850, 220, 210, "zeros");

	for (int b = 0; b < 216; b++)
	  for (int a = 1; a < 716; a++)
	  {
	    
	     A[a][b][a]=A[a-1][b][a]*B[a];
	    
	     B[a]=B[a]*0.515;
	     B[a]=A[a][b][a];
	    
	     A[a][b][a]=A[a+3][b+4][a+3]-0.722;
	  }

    return 0;
}