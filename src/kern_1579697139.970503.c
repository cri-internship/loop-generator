#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **D = create_two_dim_int(880, 180, "ones");
	int **C = create_two_dim_int(590, 680, "ones");
	int ***B = create_three_dim_int(580, 970, 970, "ones");
	int ***A = create_three_dim_int(200, 680, 980, "ones");

	for (int d = 2; d < 180; d++)
	  for (int c = 3; c < 880; c++)
	    for (int b = 3; b < 880; b++)
	      for (int a = 3; a < 880; a++)
	      {
	        
	       D[a][b]=D[a-3][b-2]/C[a][b]-B[a][b][c]+A[a][b][c];
	      }

    return 0;
}