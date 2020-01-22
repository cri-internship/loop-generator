#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***D = create_three_dim_int(680, 350, 950, "random");
	int **B = create_two_dim_int(280, 60, "random");
	int *C = create_one_dim_int(810, "random");
	int **A = create_two_dim_int(140, 860, "random");

	for (int c = 5; c < 950; c++)
	  for (int b = 5; b < 57; b++)
	    for (int a = 5; a < 137; a++)
	    {
	      
	      B[a][b]=B[a-5][b-2]/10;
	      
	      B[a][b]=B[a+1][b+3]+38;
	      
	      int var_a=C[a]+37;
	      C[a]=49;
	      
	      D[a][b][c]=B[a][b]-C[a]*39;
	      D[a-5][b-3][c-5]=C[a]/A[a][b];
	      
	      A[a][b]=D[a][b][c];
	      A[a+3][b+4]=21;
	      
	      D[a][b][c]=C[a]*B[a][b]+A[a][b];
	    }

    return 0;
}