#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(200, 920, "random");
	int ***B = create_three_dim_int(790, 780, 780, "random");

	for (int c = 0; c < 776; c++)
	  for (int b = 5; b < 780; b++)
	    for (int a = 5; a < 200; a++)
	    {
	      
	      A[a][b]=A[a-1][b]/45;
	      
	      A[a][b]=A[a-5][b-5]*B[a][b][c];
	      
	      B[a][b][c]=A[a][b];
	      B[a+3][b][c+4]=A[a][b];
	      
	      int var_a=A[a][b]+19;
	      int var_b=A[a-2][b-3]+23;
	    }

    return 0;
}