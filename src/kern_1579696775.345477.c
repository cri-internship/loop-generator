#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(810, 850, "zeros");
	int **B = create_two_dim_int(210, 440, "zeros");

	for (int c = 1; c < 438; c++)
	  for (int b = 5; b < 206; b++)
	    for (int a = 5; a < 206; a++)
	    {
	      
	      B[a][b]=B[a-4][b-1]*12;
	      
	      B[a][b]=2;
	      
	      A[a][b]=41;
	      A[a+5][b]=B[a][b];
	      
	      int var_a=B[a][b]+50;
	      int var_b=B[a+4][b+1]-5;
	      
	      int var_c=A[a][b]/34;
	      int var_d=A[a-4][b]+2;
	      
	      A[a][b]=A[a][b]/B[a][b];
	      B[a][b]=A[a-5][b]-B[a][b];
	    }

    return 0;
}