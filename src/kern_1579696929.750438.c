#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(780, 730, "zeros");
	int ***B = create_three_dim_int(950, 830, 410, "zeros");
	int **D = create_two_dim_int(660, 510, "zeros");
	int ***C = create_three_dim_int(800, 660, 700, "zeros");

	for (int b = 4; b < 509; b++)
	  for (int a = 4; a < 659; a++)
	  {
	    
	     B[a][b][a]=B[a-2][b-4][a-4]/C[a][b][a]+D[a][b]*A[a][b];
	    
	     C[a][b][a]=C[a-3][b][a-4]-B[a][b][a]*D[a][b];
	    
	     A[a][b]=A[a+3][b+5]+31;
	    
	     D[a][b]=D[a][b]/A[a][b]*C[a][b][a];
	     A[a][b]=D[a+1][b+1]+C[a][b][a]-B[a][b][a]/A[a][b];
	  }

    return 0;
}