#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *E = create_one_dim_int(870, "zeros");
	int ***D = create_three_dim_int(750, 870, 160, "zeros");
	int *A = create_one_dim_int(220, "zeros");
	int **C = create_two_dim_int(820, 120, "zeros");
	int **B = create_two_dim_int(630, 580, "zeros");

	for (int c = 0; c < 160; c++)
	  for (int b = 0; b < 869; b++)
	    for (int a = 0; a < 747; a++)
	    {
	      
	      D[a][b][c]=D[a+3][b+1][c]/3;
	    }

    return 0;
}