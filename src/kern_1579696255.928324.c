#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(130, 950, "zeros");
	int ***B = create_three_dim_int(950, 220, 490, "zeros");

	for (int c = 1; c < 488; c++)
	  for (int b = 5; b < 218; b++)
	    for (int a = 5; a < 130; a++)
	    {
	      
	      B[a][b][c]=B[a-4][b-1][c-1]*24;
	      
	      B[a][b][c]=B[a-5][b-4][c-1]+1;
	      
	      B[a][b][c]=B[a][b-5][c-1]*8;
	      
	      A[a][b]=A[a-2][b-4]/11;
	      
	      B[a][b][c]=B[a][b+2][c+2]*12;
	    }

    return 0;
}