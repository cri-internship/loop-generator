#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(230, "zeros");
	int ***C = create_three_dim_int(580, 120, 280, "zeros");
	int **A = create_two_dim_int(190, 640, "zeros");
	int **E = create_two_dim_int(270, 60, "zeros");
	int ***D = create_three_dim_int(640, 360, 490, "zeros");

	for (int c = 4; c < 55; c++)
	  for (int b = 5; b < 190; b++)
	    for (int a = 5; a < 190; a++)
	    {
	      
	      E[a][b]=E[a-1][b-3]/20;
	      
	      A[a][b]=A[a-5][b-4]-C[a][b][c]*D[a][b][c];
	      
	      E[a][b]=E[a+3][b+5]*46;
	      
	      A[a][b]=16;
	    }

    return 0;
}