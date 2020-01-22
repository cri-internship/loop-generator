#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(10, 330, "ones");
	int ***B = create_three_dim_int(400, 340, 630, "ones");
	int **A = create_two_dim_int(410, 490, "ones");
	int ***D = create_three_dim_int(570, 320, 550, "ones");

	for (int b = 2; b < 327; b++)
	  for (int a = 0; a < 9; a++)
	  {
	    
	     B[a][b][a]=B[a][b-2][a]+D[a][b][a]/12-A[a][b];
	    
	     C[a][b]=C[a+1][b+3]*25;
	  }

    return 0;
}