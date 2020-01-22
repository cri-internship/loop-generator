#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(590, 120, 270, "zeros");
	float **B = create_two_dim_float(830, 120, "zeros");

	for (int b = 4; b < 115; b++)
	  for (int a = 2; a < 585; a++)
	  {
	    
	     B[a][b]=B[a-2][b-4]/A[a][b][a];
	    
	     A[a][b][a]=0.834;
	     A[a+1][b+5][a+5]=0.976;
	  }

    return 0;
}