#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(430, 100, 910, "ones");
	float ***A = create_three_dim_float(570, 420, 420, "ones");

	for (int b = 4; b < 100; b++)
	  for (int a = 5; a < 430; a++)
	  {
	    
	     A[a][b][a]=A[a-1][b-4][a-2]*B[a][b][a];
	    
	     A[a][b][a]=B[a][b][a];
	    
	     float var_a=B[a][b][a]+0.993;
	     float var_b=B[a][b-1][a-5]+0.819;
	  }

    return 0;
}