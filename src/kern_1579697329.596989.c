#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(990, 180, 570, "ones");
	int **D = create_two_dim_int(1000, 760, "ones");
	int **A = create_two_dim_int(600, 870, "ones");
	int **C = create_two_dim_int(550, 610, "ones");

	for (int c = 3; c < 570; c++)
	  for (int b = 2; b < 180; b++)
	    for (int a = 4; a < 990; a++)
	    {
	      
	      B[a][b][c]=B[a-4][b-2][c-3]+D[a][b];
	      
	      D[a][b]=D[a+1][b+4]-C[a][b]*A[a][b]/B[a][b][c];
	    }

    return 0;
}