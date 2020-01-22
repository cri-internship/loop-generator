#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(320, 410, 790, "ones");
	int *A = create_one_dim_int(110, "ones");

	for (int b = 4; b < 410; b++)
	  for (int a = 5; a < 108; a++)
	  {
	    
	     B[a][b][a]=B[a-3][b-2][a-2]/25;
	    
	     B[a][b][a]=B[a-4][b-4][a-1]*A[a];
	    
	     B[a][b][a]=B[a-5][b][a-3]-A[a];
	    
	     A[a]=35;
	     A[a-3]=21;
	    
	     A[a]=B[a][b][a];
	    
	     A[a]=B[a][b][a]+33;
	     B[a][b][a]=B[a-4][b][a-3]-A[a];
	  }

    return 0;
}