#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(280, 540, 760, "zeros");
	int ***B = create_three_dim_int(920, 480, 110, "zeros");

	for (int c = 0; c < 110; c++)
	  for (int b = 5; b < 480; b++)
	    for (int a = 4; a < 276; a++)
	    {
	      
	      A[a][b][c]=A[a+4][b+1][c]*B[a][b][c];
	      
	      B[a][b][c]=A[a][b][c]*B[a][b][c];
	      A[a][b][c]=A[a+3][b+2][c+5]/4;
	      
	      A[a][b][c]=B[a][b][c]+A[a][b][c];
	      B[a][b][c]=B[a-4][b-5][c]/46;
	    }

    return 0;
}