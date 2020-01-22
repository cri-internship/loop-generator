#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***E = create_three_dim_int(550, 580, 670, "zeros");
	int **D = create_two_dim_int(620, 380, "zeros");
	int **B = create_two_dim_int(700, 740, "zeros");
	int *A = create_one_dim_int(270, "zeros");
	int **C = create_two_dim_int(580, 90, "zeros");

	for (int c = 0; c < 376; c++)
	  for (int b = 0; b < 617; b++)
	    for (int a = 0; a < 617; a++)
	    {
	      
	      D[a][b]=D[a+3][b+4]/C[a][b]+E[a][b][c]*B[a][b];
	    }

    return 0;
}