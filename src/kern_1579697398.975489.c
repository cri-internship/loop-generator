#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(340, "zeros");
	int **A = create_two_dim_int(590, 320, "zeros");
	int *B = create_one_dim_int(130, "zeros");
	int ***C = create_three_dim_int(590, 930, 760, "zeros");

	for (int d = 0; d < 755; d++)
	  for (int c = 4; c < 316; c++)
	    for (int b = 3; b < 588; b++)
	      for (int a = 3; a < 588; a++)
	      {
	        
	       A[a][b]=A[a+2][b+4]*D[a]/B[a]-C[a][b][c];
	        
	       C[a][b][c]=A[a][b]/A[a][b]*B[a];
	       C[a+2][b+4][c+5]=D[a]*A[a][b]/B[a];
	        
	       C[a][b][c]=A[a][b]/C[a][b][c];
	       B[a]=A[a-3][b-4]-C[a][b][c]/B[a];
	      }

    return 0;
}