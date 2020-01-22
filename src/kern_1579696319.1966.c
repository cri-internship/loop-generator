#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(270, 570, 80, "ones");
	int **A = create_two_dim_int(170, 480, "ones");
	int **C = create_two_dim_int(10, 60, "ones");

	for (int c = 2; c < 57; c++)
	  for (int b = 5; b < 5; b++)
	    for (int a = 5; a < 5; a++)
	    {
	      
	      A[a][b]=A[a-1][b]+0;
	      
	      C[a][b]=C[a-5][b-2]-B[a][b][c];
	      
	      C[a][b]=C[a+5][b+1]*27;
	      
	      A[a][b]=C[a][b];
	      
	      int var_a=C[a][b]*39;
	      int var_b=C[a][b+3]+11;
	    }

    return 0;
}