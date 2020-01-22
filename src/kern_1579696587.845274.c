#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(690, 210, 720, "ones");
	int **A = create_two_dim_int(50, 570, "ones");

	for (int c = 4; c < 716; c++)
	  for (int b = 5; b < 208; b++)
	    for (int a = 4; a < 45; a++)
	    {
	      
	      B[a][b][c]=B[a-2][b-1][c-3]/A[a][b];
	      
	      A[a][b]=A[a+5][b+3]/11;
	      
	      A[a][b]=A[a+3][b+4]*32;
	      
	      B[a][b][c]=B[a+2][b+2][c+4]*43;
	      
	      B[a][b][c]=B[a][b][c]*A[a][b];
	      A[a][b]=B[a-4][b-4][c-4]*3;
	    }

    return 0;
}