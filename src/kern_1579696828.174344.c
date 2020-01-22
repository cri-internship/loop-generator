#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(880, "random");
	float ***B = create_three_dim_float(860, 820, 660, "random");

	for (int b = 3; b < 819; b++)
	  for (int a = 3; a < 855; a++)
	  {
	    
	     A[a]=A[a-3]+B[a][b][a];
	    
	     B[a][b][a]=B[a-3][b-3][a-3]*0.431;
	    
	     A[a]=A[a+3]*B[a][b][a];
	    
	     B[a][b][a]=B[a+1][b][a+5]+0.116;
	    
	     B[a][b][a]=B[a+2][b+1][a+1]-A[a];
	    
	     A[a]=A[a]+0.035;
	     B[a][b][a]=A[a-2]+B[a][b][a];
	  }

    return 0;
}