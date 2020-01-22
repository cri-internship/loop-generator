#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(200, 520, 580, "zeros");
	int **A = create_two_dim_int(710, 350, "zeros");
	int ***B = create_three_dim_int(660, 660, 230, "zeros");
	int **D = create_two_dim_int(410, 120, "zeros");

	for (int c = 1; c < 227; c++)
	  for (int b = 3; b < 120; b++)
	    for (int a = 1; a < 200; a++)
	    {
	      
	      D[a][b]=D[a-1][b]*24;
	      
	      C[a][b][c]=38;
	      C[a][b-3][c-1]=20;
	      
	      D[a][b]=B[a][b][c]+C[a][b][c]-D[a][b]/A[a][b];
	      B[a][b][c]=B[a+2][b+4][c+3]-30/D[a][b];
	    }

    return 0;
}