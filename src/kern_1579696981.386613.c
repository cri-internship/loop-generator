#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(20, 300, 100, "random");
	float ***A = create_three_dim_float(50, 770, 280, "random");
	float **B = create_two_dim_float(330, 890, "random");

	for (int b = 2; b < 296; b++)
	  for (int a = 4; a < 17; a++)
	  {
	    
	     B[a][b]=B[a-4][b-1]+0.62;
	    
	     C[a][b][a]=C[a-4][b][a-2]+0.933;
	    
	     B[a][b]=B[a-1][b-2]/C[a][b][a];
	    
	     C[a][b][a]=C[a+3][b+4][a+2]/A[a][b][a];
	    
	     B[a][b]=B[a][b+1]*0.008;
	    
	     B[a][b]=B[a+4][b+1]+0.214;
	  }

    return 0;
}