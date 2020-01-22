#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(170, 100, "random");
	int *C = create_one_dim_int(100, "random");
	int ***A = create_three_dim_int(1000, 40, 790, "random");

	for (int d = 5; d < 785; d++)
	  for (int c = 5; c < 40; c++)
	    for (int b = 4; b < 168; b++)
	      for (int a = 4; a < 168; a++)
	      {
	        
	       A[a][b][c]=A[a-4][b-3][c-4]-23;
	        
	       A[a][b][c]=A[a-4][b][c-2]-29;
	        
	       B[a][b]=B[a+2][b]/45;
	        
	       C[a]=A[a][b][c]-B[a][b]*C[a];
	       A[a][b][c]=A[a][b][c+5]-45;
	        
	       int var_a=A[a][b][c]/0;
	       int var_b=A[a-1][b-5][c-1]-36;
	        
	       int var_c=B[a][b]/9;
	       int var_d=B[a-4][b-4]+18;
	      }

    return 0;
}