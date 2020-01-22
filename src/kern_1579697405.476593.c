#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(120, 40, "random");
	int ***A = create_three_dim_int(390, 270, 20, "random");

	for (int b = 4; b < 37; b++)
	  for (int a = 3; a < 115; a++)
	  {
	    
	     B[a][b]=B[a-3][b-4]-41;
	    
	     A[a][b][a]=A[a-1][b-4][a-3]/2;
	    
	     B[a][b]=B[a+5][b+3]/9;
	  }

    return 0;
}