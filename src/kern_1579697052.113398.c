#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(920, 370, 740, "ones");
	int *E = create_one_dim_int(210, "ones");
	int *B = create_one_dim_int(620, "ones");
	int **A = create_two_dim_int(270, 440, "ones");
	int *D = create_one_dim_int(600, "ones");

	for (int b = 2; b < 370; b++)
	  for (int a = 5; a < 270; a++)
	  {
	    
	     A[a][b]=47;
	     A[a-5][b-2]=32;
	    
	     D[a]=C[a][b][a]/43+E[a]-B[a];
	     E[a]=C[a-1][b-2][a-4]/D[a]-B[a];
	  }

    return 0;
}