#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(820, 400, 700, "ones");
	float **B = create_two_dim_float(150, 710, "ones");

	for (int b = 5; b < 400; b++)
	  for (int a = 5; a < 145; a++)
	  {
	    
	     A[a][b][a]=A[a-1][b-5][a-3]-0.362;
	    
	     A[a][b][a]=A[a-3][b-5][a-4]+0.141;
	    
	     B[a][b]=A[a][b][a];
	     B[a][b]=A[a][b][a];
	    
	     A[a][b][a]=B[a][b]+0.77;
	     B[a][b]=B[a+5][b+3]/A[a][b][a];
	    
	     float var_a=B[a][b]*0.374;
	     float var_b=B[a-2][b]-0.366;
	  }

    return 0;
}