#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(160, 230, 760, "ones");
	float ***B = create_three_dim_float(940, 300, 380, "ones");

	for (int b = 1; b < 228; b++)
	  for (int a = 5; a < 156; a++)
	  {
	    
	     A[a][b][a]=A[a+4][b+2][a+3]*0.019;
	    
	     B[a][b][a]=A[a][b][a];
	     B[a+4][b][a+4]=A[a][b][a];
	    
	     A[a][b][a]=B[a][b][a];
	  }

    return 0;
}