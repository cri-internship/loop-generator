#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(50, 50, "random");
	int *A = create_one_dim_int(100, "random");
	int ***C = create_three_dim_int(50, 50, 50, "random");

	for (int c = 0; c < 50; c++)
	  for (int b = 0; b < 50; b++)
	    for (int a = 3; a < 49; a++)
	    {
	      
	      int var_a=A[a-3]+38;
	      int var_b=A[a-1]/A[a]/2;
	      
	      A[a]=C[a][b][c]-A[a]*B[a][b];
	      B[a][b]=C[a+1][b][c]/12-A[a];
	      
	      int var_c=C[a][b][c]-6;
	    }

    return 0;
}