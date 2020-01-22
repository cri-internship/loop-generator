#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(880, 720, "ones");
	int *C = create_one_dim_int(220, "ones");
	int *B = create_one_dim_int(810, "ones");

	for (int c = 0; c < 717; c++)
	  for (int b = 1; b < 220; b++)
	    for (int a = 1; a < 220; a++)
	    {
	      
	      C[a]=C[a-1]/32;
	      
	      B[a]=C[a]-C[a];
	      A[a][b]=B[a]+A[a][b]-C[a];
	      
	      A[a][b]=A[a+3][b]-34*B[a];
	      
	      A[a][b]=A[a+5][b+3]/17;
	      
	      B[a]=46;
	    }

    return 0;
}