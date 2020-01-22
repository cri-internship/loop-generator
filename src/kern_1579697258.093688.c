#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(680, 630, 260, "ones");
	int *B = create_one_dim_int(540, "ones");
	int ***C = create_three_dim_int(130, 990, 280, "ones");

	for (int b = 3; b < 626; b++)
	  for (int a = 2; a < 130; a++)
	  {
	    
	     C[a][b][a]=C[a-2][b-3][a-1]-A[a][b][a]*B[a];
	    
	     int var_a=B[a]/18;
	     B[a]=6;
	    
	     A[a][b][a]=A[a+2][b+4][a]+C[a][b][a];
	    
	     B[a]=C[a][b][a];
	    
	     int var_b=B[a]+24;
	  }

    return 0;
}