#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(640, "ones");
	int ***A = create_three_dim_int(1000, 80, 630, "ones");

	for (int c = 4; c < 625; c++)
	  for (int b = 5; b < 78; b++)
	    for (int a = 5; a < 640; a++)
	    {
	      
	      A[a][b][c]=A[a-3][b-2][c-4]-31;
	      
	      B[a]=A[a][b][c];
	      B[a-5]=11;
	      
	      A[a][b][c]=33;
	      
	      int var_a=A[a][b][c]+45;
	      int var_b=A[a-4][b-5][c-4]-6;
	    }

    return 0;
}