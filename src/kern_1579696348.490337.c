#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(920, "zeros");
	int *B = create_one_dim_int(560, "zeros");
	int ***D = create_three_dim_int(210, 860, 610, "zeros");
	int **A = create_two_dim_int(730, 920, "zeros");

	for (int c = 1; c < 610; c++)
	  for (int b = 2; b < 860; b++)
	    for (int a = 2; a < 210; a++)
	    {
	      
	      D[a][b][c]=D[a-2][b-2][c-1]-39;
	      
	      A[a][b]=38;
	      A[a+2][b+3]=19;
	    }

    return 0;
}