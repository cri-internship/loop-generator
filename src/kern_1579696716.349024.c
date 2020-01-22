#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(950, 370, 410, "ones");
	int *A = create_one_dim_int(90, "ones");
	int ***C = create_three_dim_int(420, 60, 810, "ones");

	for (int d = 2; d < 407; d++)
	  for (int c = 2; c < 56; c++)
	    for (int b = 4; b < 90; b++)
	      for (int a = 4; a < 90; a++)
	      {
	        
	       B[a][b][c]=B[a-3][b-2][c]-A[a];
	        
	       B[a][b][c]=B[a+4][b][c+2]*C[a][b][c];
	        
	       C[a][b][c]=C[a+2][b+1][c+3]-B[a][b][c]/A[a];
	        
	       C[a][b][c]=33;
	        
	       int var_a=A[a]/40;
	       int var_b=A[a-4]+50;
	      }

    return 0;
}