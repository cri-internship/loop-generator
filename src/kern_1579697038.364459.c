#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(980, 280, 810, "random");
	int *C = create_one_dim_int(410, "random");
	int *A = create_one_dim_int(780, "random");
	int **D = create_two_dim_int(210, 1000, "random");

	for (int c = 5; c < 810; c++)
	  for (int b = 4; b < 280; b++)
	    for (int a = 4; a < 210; a++)
	    {
	      
	      D[a][b]=D[a-4][b-4]-A[a]/C[a];
	      
	      B[a][b][c]=B[a-3][b-1][c-3]*D[a][b]+A[a]-C[a];
	      
	      B[a][b][c]=C[a];
	      
	      int var_a=C[a]-8;
	      int var_b=C[a-1]-17;
	      
	      int var_c=A[a]/34;
	      int var_d=A[a+5]+8;
	    }

    return 0;
}