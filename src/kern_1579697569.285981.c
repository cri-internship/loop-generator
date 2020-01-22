#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***E = create_three_dim_int(160, 230, 950, "ones");
	int ***C = create_three_dim_int(50, 970, 850, "ones");
	int ***A = create_three_dim_int(420, 700, 30, "ones");
	int **B = create_two_dim_int(800, 890, "ones");
	int **D = create_two_dim_int(610, 860, "ones");

	for (int b = 3; b < 700; b++)
	  for (int a = 5; a < 420; a++)
	  {
	    
	     B[a][b]=B[a-5][b-3]+10;
	    
	     A[a][b][a]=41;
	     A[a][b][a-4]=0;
	    
	     C[a][b][a]=B[a][b]/C[a][b][a]-A[a][b][a]+E[a][b][a]*27;
	     D[a][b]=B[a+3][b]-D[a][b];
	  }

    return 0;
}