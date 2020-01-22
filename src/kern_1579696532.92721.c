#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***D = create_three_dim_int(740, 330, 800, "random");
	int ***A = create_three_dim_int(430, 1000, 290, "random");
	int *B = create_one_dim_int(90, "random");
	int *C = create_one_dim_int(900, "random");

	for (int d = 2; d < 798; d++)
	  for (int c = 4; c < 325; c++)
	    for (int b = 4; b < 738; b++)
	      for (int a = 4; a < 738; a++)
	      {
	        
	       D[a][b][c]=D[a-4][b-4][c-2]*31;
	        
	       D[a][b][c]=D[a-3][b-1][c-1]+C[a]/A[a][b][c]*A[a][b][c];
	        
	       D[a][b][c]=D[a][b][c]-A[a][b][c];
	       B[a]=D[a+2][b+5][c+2]-B[a]/37;
	      }

    return 0;
}