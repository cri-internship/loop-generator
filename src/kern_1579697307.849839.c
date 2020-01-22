#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***D = create_three_dim_int(350, 760, 670, "random");
	int **A = create_two_dim_int(10, 670, "random");
	int **E = create_two_dim_int(690, 90, "random");
	int **B = create_two_dim_int(10, 260, "random");
	int ***C = create_three_dim_int(310, 150, 810, "random");

	for (int c = 3; c < 670; c++)
	  for (int b = 4; b < 256; b++)
	    for (int a = 2; a < 5; a++)
	    {
	      
	      D[a][b][c]=D[a-2][b-4][c-3]*0;
	      
	      B[a][b]=A[a][b]/E[a][b]*C[a][b][c]+D[a][b][c];
	      B[a+5][b+4]=C[a][b][c]*D[a][b][c];
	    }

    return 0;
}