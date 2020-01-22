#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***E = create_three_dim_int(870, 540, 730, "ones");
	int *A = create_one_dim_int(540, "ones");
	int **D = create_two_dim_int(920, 860, "ones");
	int **B = create_two_dim_int(630, 30, "ones");
	int *C = create_one_dim_int(440, "ones");

	for (int b = 1; b < 28; b++)
	  for (int a = 4; a < 540; a++)
	  {
	    
	     A[a]=A[a-4]-39;
	    
	     D[a][b]=D[a+4][b]/C[a]-A[a]*B[a][b];
	    
	     E[a][b][a]=E[a+4][b+5][a+5]/16;
	    
	     B[a][b]=45;
	     B[a-1][b]=17;
	    
	     B[a][b]=1;
	    
	     E[a][b][a]=36;
	  }

    return 0;
}