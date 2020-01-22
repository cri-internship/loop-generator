#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(740, "zeros");
	int ***C = create_three_dim_int(890, 110, 330, "zeros");
	int **A = create_two_dim_int(900, 290, "zeros");

	for (int d = 5; d < 330; d++)
	  for (int c = 5; c < 110; c++)
	    for (int b = 3; b < 890; b++)
	      for (int a = 3; a < 890; a++)
	      {
	        
	       C[a][b][c]=C[a-3][b-5][c-4]+22;
	        
	       C[a][b][c]=C[a][b][c-2]*24;
	        
	       A[a][b]=C[a][b][c]+A[a][b]-B[a];
	       B[a]=C[a-3][b-1][c-2]+B[a]-A[a][b];
	      }

    return 0;
}