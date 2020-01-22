#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(1000, "zeros");
	float ***B = create_three_dim_float(310, 280, 10, "zeros");

	for (int b = 0; b < 276; b++)
	  for (int a = 0; a < 305; a++)
	  {
	    
	     B[a][b][a]=B[a+5][b+4][a+3]+A[a];
	    
	     float var_a=A[a]+0.292;
	     A[a]=0.193;
	    
	     A[a]=A[a+2]/0.624;
	    
	     B[a][b][a]=B[a+2][b][a+4]-0.603;
	    
	     float var_b=A[a]+0.259;
	     float var_c=A[a+3]-0.346;
	  }

    return 0;
}