#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **D = create_two_dim_int(430, 750, "random");
	int ***C = create_three_dim_int(960, 330, 490, "random");
	int *E = create_one_dim_int(270, "random");
	int *B = create_one_dim_int(980, "random");
	int ***A = create_three_dim_int(690, 40, 910, "random");

	for (int b = 5; b < 37; b++)
	  for (int a = 3; a < 270; a++)
	  {
	    
	     D[a][b]=D[a-3][b-5]+10;
	    
	     E[a]=E[a-2]-43;
	    
	     D[a][b]=D[a-3][b-2]*C[a][b][a];
	    
	     A[a][b][a]=B[a]+E[a]*D[a][b];
	     A[a+3][b+3][a+4]=C[a][b][a]+B[a]*D[a][b];
	  }

    return 0;
}