#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(260, "ones");
	double ***C = create_three_dim_double(170, 510, 500, "ones");
	double ***B = create_three_dim_double(960, 440, 340, "ones");

	for (int b = 4; b < 437; b++)
	  for (int a = 4; a < 167; a++)
	  {
	    
	     C[a][b][a]=C[a-2][b-4][a-4]-B[a][b][a];
	    
	     B[a][b][a]=B[a-4][b-3][a-3]*0.066;
	    
	     A[a]=A[a-2]+0.308;
	    
	     B[a][b][a]=B[a+2][b+3][a+3]*0.078;
	    
	     C[a][b][a]=C[a+1][b+4][a+2]*0.816+B[a][b][a];
	    
	     C[a][b][a]=C[a][b+5][a+3]-A[a];
	  }

    return 0;
}