#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **E = create_two_dim_int(500, 740, "ones");
	int *B = create_one_dim_int(540, "ones");
	int *C = create_one_dim_int(850, "ones");
	int **A = create_two_dim_int(990, 330, "ones");
	int **D = create_two_dim_int(780, 290, "ones");

	for (int b = 3; b < 290; b++)
	  for (int a = 5; a < 500; a++)
	  {
	    
	     E[a][b]=E[a-2][b-3]/A[a][b]-8;
	    
	     D[a][b]=D[a-3][b-1]-B[a]*C[a]/E[a][b]+C[a];
	    
	     C[a]=C[a-5]/E[a][b]-B[a]*A[a][b];
	    
	     int var_a=B[a]-40;
	     B[a]=19;
	  }

    return 0;
}