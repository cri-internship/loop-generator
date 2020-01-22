#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(510, 110, 470, "ones");
	int ***A = create_three_dim_int(510, 710, 520, "ones");
	int ***B = create_three_dim_int(530, 260, 900, "ones");

	for (int c = 5; c < 470; c++)
	  for (int b = 4; b < 110; b++)
	    for (int a = 5; a < 508; a++)
	    {
	      
	      C[a][b][c]=C[a-4][b-2][c-4]*5;
	      
	      A[a][b][c]=A[a-5][b-1][c-5]+19;
	      
	      A[a][b][c]=B[a][b][c]+22;
	      
	      C[a][b][c]=A[a][b][c];
	    }

    return 0;
}