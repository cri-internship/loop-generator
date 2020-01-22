#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(110, 970, "zeros");
	float **A = create_two_dim_float(660, 630, "zeros");

	for (int b = 5; b < 626; b++)
	  for (int a = 4; a < 110; a++)
	  {
	    
	     B[a][b]=B[a-4][b-1]-1.0;
	    
	     A[a][b]=A[a-4][b-5]*0.405;
	    
	     A[a][b]=A[a][b+4]-0.28;
	    
	     A[a][b]=A[a+3][b+1]+0.278;
	    
	     B[a][b]=A[a][b]*B[a][b];
	     A[a][b]=A[a][b-3]/B[a][b];
	  }

    return 0;
}