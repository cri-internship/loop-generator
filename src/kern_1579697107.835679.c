#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(600, "ones");
	int **D = create_two_dim_int(480, 50, "ones");
	int ***C = create_three_dim_int(1000, 310, 980, "ones");
	int *B = create_one_dim_int(610, "ones");

	for (int d = 4; d < 980; d++)
	  for (int c = 4; c < 50; c++)
	    for (int b = 5; b < 477; b++)
	      for (int a = 5; a < 477; a++)
	      {
	        
	       C[a][b][c]=C[a-3][b-1][c-4]-20;
	        
	       D[a][b]=D[a][b-4]/26;
	        
	       B[a]=B[a-5]+5/D[a][b];
	        
	       D[a][b]=D[a+3][b]+C[a][b][c]*B[a];
	        
	       int var_a=D[a][b]-17;
	       int var_b=D[a][b]/32;
	      }

    return 0;
}