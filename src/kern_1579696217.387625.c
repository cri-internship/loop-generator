#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(540, 450, "ones");
	float ***A = create_three_dim_float(70, 750, 80, "ones");

	for (int b = 3; b < 448; b++)
	  for (int a = 5; a < 65; a++)
	  {
	    
	     A[a][b][a]=A[a][b-2][a-5]-0.679;
	    
	     A[a][b][a]=A[a-2][b-3][a-4]*B[a][b];
	    
	     A[a][b][a]=A[a+2][b+1][a+3]*0.107;
	    
	     A[a][b][a]=A[a+4][b+4][a+5]+0.125;
	    
	     A[a][b][a]=B[a][b]-0.607;
	     B[a][b]=B[a+4][b+2]+A[a][b][a];
	  }

    return 0;
}