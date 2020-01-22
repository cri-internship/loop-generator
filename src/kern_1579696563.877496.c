#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(130, "random");
	int *D = create_one_dim_int(420, "random");
	int **C = create_two_dim_int(570, 950, "random");
	int **B = create_two_dim_int(990, 800, "random");
	int ***E = create_three_dim_int(480, 750, 920, "random");

	for (int c = 3; c < 920; c++)
	  for (int b = 5; b < 750; b++)
	    for (int a = 3; a < 127; a++)
	    {
	      
	      E[a][b][c]=E[a-3][b][c-3]-43;
	      
	      E[a][b][c]=E[a][b-5][c-3]-D[a]+B[a][b];
	      
	      A[a]=A[a+3]-28;
	      
	      D[a]=43;
	      D[a-3]=42;
	    }

    return 0;
}