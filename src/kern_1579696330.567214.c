#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(610, 930, 1000, "ones");
	int *B = create_one_dim_int(510, "ones");
	int **C = create_two_dim_int(340, 980, "ones");

	for (int c = 5; c < 1000; c++)
	  for (int b = 4; b < 930; b++)
	    for (int a = 5; a < 340; a++)
	    {
	      
	      A[a][b][c]=A[a-5][b-1][c-2]/47;
	      
	      C[a][b]=C[a-3][b]*B[a];
	      
	      C[a][b]=C[a][b+1]*49;
	      
	      A[a][b][c]=10;
	      
	      int var_a=C[a][b]/40;
	      int var_b=C[a-3][b-4]/11;
	    }

    return 0;
}