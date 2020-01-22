#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(480, 450, "ones");
	float ***A = create_three_dim_float(240, 280, 350, "ones");

	for (int b = 3; b < 277; b++)
	  for (int a = 5; a < 235; a++)
	  {
	    
	     A[a][b][a]=A[a-2][b-3][a-1]+B[a][b];
	    
	     B[a][b]=B[a-5][b-1]/0.276;
	    
	     B[a][b]=B[a-1][b-3]*0.784;
	    
	     A[a][b][a]=0.093;
	  }

    return 0;
}