#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(920, "ones");
	int ***B = create_three_dim_int(730, 140, 350, "ones");

	for (int c = 1; c < 350; c++)
	  for (int b = 3; b < 140; b++)
	    for (int a = 4; a < 730; a++)
	    {
	      
	      A[a]=A[a-4]/47;
	      
	      B[a][b][c]=0;
	      B[a-3][b-3][c-1]=14;
	      
	      A[a]=3;
	      
	      int var_a=A[a]*5;
	      int var_b=A[a]+3;
	    }

    return 0;
}