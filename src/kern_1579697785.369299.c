#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(810, "random");
	int **C = create_two_dim_int(470, 440, "random");
	int **B = create_two_dim_int(920, 260, "random");

	for (int c = 0; c < 258; c++)
	  for (int b = 2; b < 469; b++)
	    for (int a = 2; a < 469; a++)
	    {
	      
	      A[a]=A[a-2]/C[a][b]+B[a][b];
	      
	      C[a][b]=C[a+1][b+3]-30;
	      
	      A[a]=A[a+4]-39;
	      
	      A[a]=A[a+2]*21;
	      
	      C[a][b]=A[a]-B[a][b];
	      
	      A[a]=B[a][b]-A[a]*C[a][b];
	      B[a][b]=B[a+5][b+2]*C[a][b]-A[a];
	    }

    return 0;
}