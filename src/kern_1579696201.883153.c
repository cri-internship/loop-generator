#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(150, 700, "ones");
	int *D = create_one_dim_int(910, "ones");
	int ***B = create_three_dim_int(100, 660, 830, "ones");
	int *A = create_one_dim_int(550, "ones");

	for (int c = 1; c < 550; c++)
	  for (int b = 1; b < 550; b++)
	    for (int a = 1; a < 550; a++)
	    {
	      
	      A[a]=A[a-1]*D[a]-C[a][b]+B[a][b][c];
	    }

    return 0;
}