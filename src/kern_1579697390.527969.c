#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(40, 400, 270, "ones");
	float *B = create_one_dim_float(200, "ones");

	for (int b = 2; b < 399; b++)
	  for (int a = 5; a < 38; a++)
	  {
	    
	     A[a][b][a]=A[a-3][b-2][a-5]+0.348;
	    
	     A[a][b][a]=A[a+2][b][a]*0.666;
	    
	     B[a]=A[a][b][a]+B[a];
	     A[a][b][a]=A[a+2][b+1][a+1]-0.012;
	  }

    return 0;
}