#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **D = create_two_dim_int(710, 460, "random");
	int *C = create_one_dim_int(410, "random");
	int ***E = create_three_dim_int(920, 40, 290, "random");
	int *B = create_one_dim_int(750, "random");
	int **A = create_two_dim_int(10, 210, "random");

	for (int b = 0; b < 460; b++)
	  for (int a = 0; a < 410; a++)
	  {
	    
	     E[a][b][a]=D[a][b]/E[a][b][a]*C[a]-A[a][b];
	     D[a][b]=B[a];
	    
	     C[a]=D[a][b]-B[a]+D[a][b]*E[a][b][a];
	     C[a]=A[a][b]*31+E[a][b][a];
	    
	     int var_a=B[a]/38;
	     int var_b=B[a+2]-40;
	  }

    return 0;
}