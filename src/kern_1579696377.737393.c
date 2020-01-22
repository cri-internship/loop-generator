#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(480, "ones");
	int **B = create_two_dim_int(890, 910, "ones");
	int ***C = create_three_dim_int(280, 490, 530, "ones");
	int *A = create_one_dim_int(220, "ones");

	for (int d = 4; d < 529; d++)
	  for (int c = 4; c < 489; c++)
	    for (int b = 3; b < 280; b++)
	      for (int a = 3; a < 280; a++)
	      {
	        
	       D[a]=D[a-1]*48/A[a];
	        
	       C[a][b][c]=C[a-2][b-3][c-4]-D[a]+A[a]/B[a][b];
	        
	       C[a][b][c]=C[a][b+1][c+1]+2;
	        
	       A[a]=C[a][b][c]-B[a][b]/D[a];
	       C[a][b][c]=C[a-1][b-4][c-4]*B[a][b]-A[a];
	        
	       int var_a=D[a]*35;
	       int var_b=D[a+5]+9;
	      }

    return 0;
}