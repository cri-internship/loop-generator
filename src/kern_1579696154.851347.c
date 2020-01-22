#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(130, 20, 240, "zeros");
	int ***C = create_three_dim_int(120, 640, 620, "zeros");
	int **D = create_two_dim_int(450, 550, "zeros");
	int **A = create_two_dim_int(650, 960, "zeros");
	int ***E = create_three_dim_int(660, 930, 680, "zeros");

	for (int b = 1; b < 15; b++)
	  for (int a = 4; a < 125; a++)
	  {
	    
	     D[a][b]=D[a-4][b-1]+A[a][b]-B[a][b][a];
	    
	     B[a][b][a]=B[a][b+5][a+5]+D[a][b]*C[a][b][a];
	    
	     E[a][b][a]=E[a+3][b+1][a+1]+A[a][b]-B[a][b][a];
	  }

    return 0;
}