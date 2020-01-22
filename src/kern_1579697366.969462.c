#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(710, 330, "zeros");
	int **A = create_two_dim_int(970, 960, "zeros");

	for (int b = 4; b < 327; b++)
	  for (int a = 4; a < 708; a++)
	  {
	    
	     A[a][b]=A[a-1][b-4]*2;
	    
	     A[a][b]=A[a-4][b-1]-29;
	    
	     B[a][b]=B[a][b-1]*27;
	    
	     B[a][b]=B[a+2][b+3]*4;
	    
	     A[a][b]=A[a+1][b]-36;
	    
	     A[a][b]=A[a][b+4]-50;
	    
	     int var_a=B[a][b]/41;
	     int var_b=B[a-3][b-2]/18;
	  }

    return 0;
}