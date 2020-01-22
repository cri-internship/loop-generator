#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(130, 220, 920, "random");
	int *C = create_one_dim_int(990, "random");
	int ***D = create_three_dim_int(210, 840, 130, "random");
	int **A = create_two_dim_int(210, 350, "random");

	for (int d = 4; d < 920; d++)
	  for (int c = 4; c < 220; c++)
	    for (int b = 5; b < 130; b++)
	      for (int a = 5; a < 130; a++)
	      {
	        
	       B[a][b][c]=B[a-2][b-4][c-4]+C[a]*D[a][b][c]-A[a][b];
	        
	       A[a][b]=A[a-5][b-2]-B[a][b][c];
	        
	       C[a]=C[a-2]*1;
	        
	       C[a]=A[a][b]-29;
	        
	       int var_a=A[a][b]-31;
	       int var_b=A[a-1][b-2]-50;
	        
	       A[a][b]=A[a][b]-B[a][b][c]/C[a]+D[a][b][c];
	       B[a][b][c]=A[a-4][b-2]/B[a][b][c];
	      }

    return 0;
}