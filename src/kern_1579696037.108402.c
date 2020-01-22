#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(470, "random");
	int *C = create_one_dim_int(190, "random");
	int *A = create_one_dim_int(30, "random");
	int *D = create_one_dim_int(400, "random");
	int ***E = create_three_dim_int(590, 870, 920, "random");

	for (int b = 0; b < 865; b++)
	  for (int a = 2; a < 28; a++)
	  {
	    
	     B[a]=B[a-2]+1;
	    
	     E[a][b][a]=E[a+1][b+3][a]/21-C[a];
	    
	     E[a][b][a]=E[a+3][b+5][a+3]*D[a]/A[a]+D[a]-B[a];
	    
	     A[a]=16;
	     A[a+2]=10;
	    
	     A[a]=E[a][b][a]/B[a]+E[a][b][a]*D[a];
	    
	     D[a]=A[a]-E[a][b][a];
	     D[a+2]=E[a][b][a];
	    
	     int var_a=C[a]/41;
	  }

    return 0;
}