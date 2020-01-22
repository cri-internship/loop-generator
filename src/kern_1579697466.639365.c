#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(790, 730, 800, "random");
	int **C = create_two_dim_int(150, 250, "random");
	int *B = create_one_dim_int(760, "random");

	for (int c = 0; c < 799; c++)
	  for (int b = 3; b < 250; b++)
	    for (int a = 1; a < 150; a++)
	    {
	      
	      C[a][b]=C[a-1][b-3]/B[a]+A[a][b][c];
	      
	      A[a][b][c]=A[a][b+1][c+1]-11;
	    }

    return 0;
}