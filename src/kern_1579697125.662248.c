#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(580, 880, "zeros");
	float ***B = create_three_dim_float(200, 500, 280, "zeros");

	for (int b = 5; b < 499; b++)
	  for (int a = 4; a < 195; a++)
	  {
	    
	     B[a][b][a]=B[a][b-3][a-4]*0.593;
	    
	     A[a][b]=A[a+3][b+5]/0.16;
	    
	     B[a][b][a]=A[a][b];
	    
	     float var_a=A[a][b]-0.71;
	     float var_b=A[a-3][b-5]/0.679;
	  }

    return 0;
}