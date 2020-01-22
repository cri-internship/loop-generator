#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(310, "ones");
	int ***A = create_three_dim_int(930, 110, 250, "ones");

	for (int c = 5; c < 245; c++)
	  for (int b = 4; b < 107; b++)
	    for (int a = 3; a < 309; a++)
	    {
	      
	      B[a]=B[a-3]*44;
	      
	      A[a][b][c]=A[a-2][b-4][c-3]/0;
	      
	      A[a][b][c]=A[a-1][b-4][c-5]*24;
	      
	      A[a][b][c]=A[a+3][b][c+4]*B[a];
	      
	      A[a][b][c]=A[a][b+1][c+5]-4;
	      
	      B[a]=A[a][b][c];
	      
	      int var_a=A[a][b][c]/21;
	      int var_b=A[a+4][b+3][c+2]-36;
	    }

    return 0;
}