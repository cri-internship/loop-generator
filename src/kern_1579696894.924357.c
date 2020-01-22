#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(600, 970, 400, "ones");
	int ***E = create_three_dim_int(620, 740, 880, "ones");
	int **D = create_two_dim_int(310, 1000, "ones");
	int *A = create_one_dim_int(600, "ones");
	int *B = create_one_dim_int(480, "ones");

	for (int d = 0; d < 400; d++)
	  for (int c = 2; c < 740; c++)
	    for (int b = 5; b < 480; b++)
	      for (int a = 5; a < 480; a++)
	      {
	        
	       B[a]=B[a-3]-C[a][b][c]*A[a];
	        
	       C[a][b][c]=C[a-5][b][c]/E[a][b][c];
	        
	       B[a]=B[a-2]-D[a][b]/46*E[a][b][c];
	        
	       int var_a=E[a][b][c]+2;
	       int var_b=E[a-4][b-2][c]+44;
	      }

    return 0;
}