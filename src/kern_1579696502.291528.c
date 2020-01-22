#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(120, 870, 50, "ones");
	int **A = create_two_dim_int(700, 460, "ones");
	int *D = create_one_dim_int(680, "ones");
	int **B = create_two_dim_int(220, 770, "ones");

	for (int d = 0; d < 49; d++)
	  for (int c = 5; c < 458; c++)
	    for (int b = 5; b < 119; b++)
	      for (int a = 5; a < 119; a++)
	      {
	        
	       C[a][b][c]=C[a+1][b+1][c+1]-43;
	        
	       A[a][b]=B[a][b]/C[a][b][c];
	       A[a+3][b+2]=D[a];
	        
	       A[a][b]=C[a][b][c]-D[a]/B[a][b];
	        
	       A[a][b]=A[a][b]*D[a]-C[a][b][c];
	       D[a]=A[a-5][b-2]-B[a][b];
	      }

    return 0;
}