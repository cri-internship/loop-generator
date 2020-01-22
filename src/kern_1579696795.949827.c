#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***D = create_three_dim_int(90, 130, 570, "random");
	int *A = create_one_dim_int(610, "random");
	int ***E = create_three_dim_int(380, 140, 110, "random");
	int **B = create_two_dim_int(210, 500, "random");
	int *C = create_one_dim_int(120, "random");

	for (int b = 4; b < 130; b++)
	  for (int a = 5; a < 90; a++)
	  {
	    
	     E[a][b][a]=E[a][b-2][a-5]+12;
	    
	     E[a][b][a]=E[a-2][b-2][a-4]*C[a]+D[a][b][a]/B[a][b]-D[a][b][a];
	    
	     B[a][b]=B[a][b-4]-43;
	    
	     B[a][b]=24;
	    
	     D[a][b][a]=42;
	     D[a-2][b-2][a-4]=45;
	    
	     B[a][b]=E[a][b][a]/C[a]*7-D[a][b][a];
	     C[a]=E[a-1][b-3][a-2]*C[a];
	  }

    return 0;
}