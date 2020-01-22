#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(470, 310, 70, "zeros");
	int **A = create_two_dim_int(960, 420, "zeros");

	for (int c = 0; c < 65; c++)
	  for (int b = 0; b < 307; b++)
	    for (int a = 4; a < 468; a++)
	    {
	      
	      B[a][b][c]=B[a+2][b+3][c+5]/0;
	      
	      B[a][b][c]=A[a][b]-B[a][b][c];
	      A[a][b]=A[a-4][b]*B[a][b][c];
	    }

    return 0;
}