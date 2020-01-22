#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(370, 520, "ones");
	int ***A = create_three_dim_int(190, 90, 490, "ones");
	int ***C = create_three_dim_int(110, 550, 340, "ones");
	int ***D = create_three_dim_int(950, 310, 320, "ones");
	int *E = create_one_dim_int(20, "ones");

	for (int b = 3; b < 90; b++)
	  for (int a = 4; a < 108; a++)
	  {
	    
	     A[a][b][a]=A[a][b-3][a-4]/E[a]*D[a][b][a]+B[a][b]-42;
	    
	     C[a][b][a]=C[a][b+5][a+2]-29;
	  }

    return 0;
}