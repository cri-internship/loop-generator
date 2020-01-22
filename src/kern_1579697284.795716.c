#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(40, 520, "ones");
	float ***A = create_three_dim_float(380, 410, 30, "ones");

	for (int b = 4; b < 406; b++)
	  for (int a = 3; a < 36; a++)
	  {
	    
	     B[a][b]=B[a+4][b+3]*0.026;
	    
	     A[a][b][a]=0.561;
	     A[a-2][b-3][a]=0.402;
	    
	     B[a][b]=0.599;
	    
	     A[a][b][a]=B[a][b];
	    
	     A[a][b][a]=A[a][b][a]-B[a][b];
	     B[a][b]=A[a+2][b+4][a+5]/B[a][b];
	    
	     A[a][b][a]=B[a][b]-A[a][b][a];
	     A[a][b][a]=B[a-3][b-4]+A[a][b][a];
	  }

    return 0;
}