#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(140, 780, 440, "ones");
	double *B = create_one_dim_double(380, "ones");

	for (int b = 5; b < 778; b++)
	  for (int a = 5; a < 135; a++)
	  {
	    
	     B[a]=B[a-4]+0.901;
	    
	     A[a][b][a]=A[a][b-5][a-5]+0.619;
	    
	     A[a][b][a]=A[a+5][b+2][a+2]+0.087;
	    
	     B[a]=B[a+3]+0.015;
	    
	     B[a]=B[a+1]*0.966;
	  }

    return 0;
}