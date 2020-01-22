#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(470, "ones");
	int ***A = create_three_dim_int(680, 660, 990, "ones");

	for (int c = 5; c < 990; c++)
	  for (int b = 5; b < 660; b++)
	    for (int a = 5; a < 470; a++)
	    {
	      
	      A[a][b][c]=A[a-5][b-5][c-5]+10;
	      
	      B[a]=B[a-1]-41;
	      
	      B[a]=25;
	      
	      int var_a=B[a]/6;
	      int var_b=B[a-3]-4;
	    }

    return 0;
}