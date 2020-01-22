#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(540, "random");
	int ***D = create_three_dim_int(360, 220, 790, "random");
	int **C = create_two_dim_int(70, 390, "random");
	int *B = create_one_dim_int(300, "random");
	int ***E = create_three_dim_int(770, 600, 560, "random");

	for (int d = 3; d < 560; d++)
	  for (int c = 4; c < 220; c++)
	    for (int b = 5; b < 70; b++)
	      for (int a = 5; a < 70; a++)
	      {
	        
	       A[a]=A[a-4]+2;
	        
	       B[a]=B[a-4]+36;
	        
	       D[a][b][c]=D[a-5][b-3][c-1]/28;
	        
	       A[a]=A[a+2]-46;
	        
	       E[a][b][c]=19;
	       E[a-3][b-4][c-3]=7;
	        
	       B[a]=8;
	        
	       int var_a=C[a][b]+43;
	       int var_b=C[a-3][b-1]*42;
	      }

    return 0;
}