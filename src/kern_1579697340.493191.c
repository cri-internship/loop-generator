#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(920, 690, 300, "zeros");
	int **C = create_two_dim_int(190, 350, "zeros");
	int *B = create_one_dim_int(250, "zeros");

	for (int c = 0; c < 346; c++)
	  for (int b = 2; b < 188; b++)
	    for (int a = 2; a < 188; a++)
	    {
	      
	      C[a][b]=C[a+2][b+4]-A[a][b][c]*B[a];
	      
	      B[a]=46;
	      B[a-2]=31;
	    }

    return 0;
}