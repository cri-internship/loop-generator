#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(990, "random");
	int ***C = create_three_dim_int(20, 810, 880, "random");
	int **B = create_two_dim_int(420, 670, "random");

	for (int c = 5; c < 877; c++)
	  for (int b = 3; b < 667; b++)
	    for (int a = 2; a < 15; a++)
	    {
	      
	      B[a][b]=B[a-1][b-3]/15;
	      
	      A[a]=A[a+4]-3;
	      
	      C[a][b][c]=C[a+5][b+2][c+1]+27;
	      
	      C[a][b][c]=B[a][b]/A[a];
	      
	      A[a]=B[a][b]*C[a][b][c]+A[a];
	      B[a][b]=B[a][b+3]/A[a]*C[a][b][c];
	      
	      int var_a=C[a][b][c]+43;
	      int var_b=C[a-2][b-1][c-5]-8;
	      
	      int var_c=B[a][b]-7;
	      int var_d=B[a+2][b+3]/23;
	    }

    return 0;
}