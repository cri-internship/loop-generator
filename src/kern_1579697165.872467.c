#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(430, 550, "ones");
	int ***A = create_three_dim_int(790, 410, 880, "ones");

	for (int b = 4; b < 405; b++)
	  for (int a = 4; a < 429; a++)
	  {
	    
	     B[a][b]=B[a-1][b-4]+39;
	    
	     B[a][b]=B[a-4][b-2]-12;
	    
	     A[a][b][a]=44;
	     A[a+3][b+5][a+5]=42;
	    
	     A[a][b][a]=B[a][b]+35;
	     B[a][b]=B[a+1][b+3]/A[a][b][a];
	  }

    return 0;
}