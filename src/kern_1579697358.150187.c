#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(40, 930, "ones");
	int **C = create_two_dim_int(760, 580, "ones");
	int ***B = create_three_dim_int(670, 810, 670, "ones");

	for (int c = 2; c < 670; c++)
	  for (int b = 5; b < 578; b++)
	    for (int a = 2; a < 40; a++)
	    {
	      
	      A[a][b]=A[a][b-2]/C[a][b]+22;
	      
	      C[a][b]=C[a+5][b+2]*9;
	      
	      B[a][b][c]=43;
	      B[a][b-5][c-2]=36;
	      
	      int var_a=B[a][b][c]-5;
	      int var_b=B[a-2][b-3][c-1]*23;
	    }

    return 0;
}