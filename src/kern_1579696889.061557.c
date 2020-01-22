#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(770, "ones");
	double ***B = create_three_dim_double(1000, 630, 540, "ones");

	for (int b = 4; b < 627; b++)
	  for (int a = 5; a < 770; a++)
	  {
	    
	     B[a][b][a]=B[a-5][b-3][a-3]/0.248;
	    
	     B[a][b][a]=B[a-3][b-4][a-2]+0.809;
	    
	     B[a][b][a]=B[a+2][b+3][a+2]*0.476;
	    
	     A[a]=0.238;
	     A[a]=0.501;
	  }

    return 0;
}