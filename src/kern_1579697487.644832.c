#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(870, "ones");
	int ***B = create_three_dim_int(760, 640, 460, "ones");

	for (int c = 4; c < 460; c++)
	  for (int b = 5; b < 640; b++)
	    for (int a = 4; a < 760; a++)
	    {
	      
	      B[a][b][c]=B[a-1][b-3][c-4]+A[a];
	      
	      B[a][b][c]=B[a-2][b-4][c-4]-A[a];
	      
	      A[a]=A[a+1]+16;
	      
	      A[a]=B[a][b][c];
	      
	      int var_a=B[a][b][c]/44;
	      int var_b=B[a][b-5][c-4]-36;
	    }

    return 0;
}