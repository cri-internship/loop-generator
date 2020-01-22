#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***D = create_three_dim_int(970, 340, 990, "ones");
	int **C = create_two_dim_int(250, 150, "ones");
	int **A = create_two_dim_int(660, 490, "ones");
	int ***B = create_three_dim_int(1000, 820, 820, "ones");

	for (int b = 0; b < 818; b++)
	  for (int a = 0; a < 996; a++)
	  {
	    
	     B[a][b][a]=B[a][b][a]*A[a][b]-C[a][b]/D[a][b][a];
	     D[a][b][a]=B[a+2][b+2][a+4]/A[a][b];
	  }

    return 0;
}