#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(730, 710, "ones");
	int ***A = create_three_dim_int(420, 1000, 640, "ones");
	int ***C = create_three_dim_int(650, 860, 160, "ones");

	for (int b = 4; b < 710; b++)
	  for (int a = 4; a < 417; a++)
	  {
	    
	     B[a][b]=B[a-4][b-4]-5;
	    
	     B[a][b]=B[a-1][b-3]+46;
	    
	     A[a][b][a]=A[a+3][b+1][a+2]/45;
	    
	     int var_a=C[a][b][a]/34;
	     int var_b=C[a+4][b+2][a+2]-22;
	  }

    return 0;
}