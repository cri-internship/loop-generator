#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(240, 450, 950, "zeros");
	double ***A = create_three_dim_double(780, 980, 480, "zeros");

	for (int b = 4; b < 446; b++)
	  for (int a = 3; a < 235; a++)
	  {
	    
	     A[a][b][a]=A[a][b-4][a-2]*0.02;
	    
	     A[a][b][a]=A[a-3][b-4][a-3]*B[a][b][a];
	    
	     A[a][b][a]=A[a+3][b+5][a+2]+0.317;
	    
	     B[a][b][a]=B[a+5][b+4][a+3]+0.173;
	    
	     A[a][b][a]=A[a+5][b+3][a+3]+0.873;
	    
	     A[a][b][a]=A[a][b+2][a+1]*B[a][b][a];
	  }

    return 0;
}