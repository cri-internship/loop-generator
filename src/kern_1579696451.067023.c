#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(600, "ones");
	int **A = create_two_dim_int(180, 840, "ones");
	int ***C = create_three_dim_int(200, 570, 360, "ones");

	for (int d = 2; d < 356; d++)
	  for (int c = 5; c < 568; c++)
	    for (int b = 5; b < 178; b++)
	      for (int a = 5; a < 178; a++)
	      {
	        
	       C[a][b][c]=C[a-2][b-5][c-1]-B[a];
	        
	       A[a][b]=A[a+2][b+4]/29;
	        
	       C[a][b][c]=1;
	        
	       int var_a=B[a]/17;
	       int var_b=B[a-1]*15;
	        
	       int var_c=B[a]/8;
	       int var_d=B[a+5]-22;
	        
	       B[a]=C[a][b][c]-B[a];
	       C[a][b][c]=C[a-5][b-4][c-2]*A[a][b]-B[a];
	      }

    return 0;
}