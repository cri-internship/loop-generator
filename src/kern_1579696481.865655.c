#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(960, 60, "ones");
	int **E = create_two_dim_int(650, 960, "ones");
	int **B = create_two_dim_int(10, 710, "ones");
	int ***D = create_three_dim_int(600, 810, 220, "ones");
	int **C = create_two_dim_int(490, 740, "ones");

	for (int c = 1; c < 740; c++)
	  for (int b = 3; b < 490; b++)
	    for (int a = 3; a < 490; a++)
	    {
	      
	      E[a][b]=C[a][b]/E[a][b]-D[a][b][c];
	      A[a][b]=C[a-3][b-1]-B[a][b]+A[a][b]*D[a][b][c];
	    }

    return 0;
}