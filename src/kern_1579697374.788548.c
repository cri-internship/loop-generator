#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(630, 940, "random");
	int ***B = create_three_dim_int(120, 200, 620, "random");

	for (int c = 5; c < 620; c++)
	  for (int b = 4; b < 200; b++)
	    for (int a = 4; a < 120; a++)
	    {
	      
	      A[a][b]=A[a][b-3]-33;
	      
	      B[a][b][c]=B[a-3][b-4][c-5]+A[a][b];
	      
	      A[a][b]=B[a][b][c]*A[a][b];
	      B[a][b][c]=B[a-4][b-1][c-1]*11;
	    }

    return 0;
}