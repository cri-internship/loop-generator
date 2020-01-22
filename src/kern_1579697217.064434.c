#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(760, 300, "random");
	int *C = create_one_dim_int(100, "random");
	int ***B = create_three_dim_int(490, 350, 510, "random");

	for (int d = 5; d < 509; d++)
	  for (int c = 4; c < 300; c++)
	    for (int b = 5; b < 100; b++)
	      for (int a = 5; a < 100; a++)
	      {
	        
	       B[a][b][c]=B[a-4][b-3][c-5]+C[a]/11;
	        
	       A[a][b]=A[a-4][b-4]/B[a][b][c]-B[a][b][c];
	        
	       B[a][b][c]=B[a+4][b+2][c+1]+C[a];
	        
	       int var_a=C[a]-23;
	       int var_b=C[a-4]/3;
	        
	       int var_c=B[a][b][c]-48;
	       int var_d=B[a-3][b-1][c]+8;
	        
	       A[a][b]=A[a][b]+B[a][b][c]-C[a];
	       C[a]=A[a-4][b]-C[a]+B[a][b][c];
	      }

    return 0;
}