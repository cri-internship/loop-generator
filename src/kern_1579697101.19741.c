#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(240, 950, "zeros");
	int **A = create_two_dim_int(90, 640, "zeros");
	int *B = create_one_dim_int(400, "zeros");
	int *D = create_one_dim_int(80, "zeros");
	int **E = create_two_dim_int(220, 310, "zeros");

	for (int b = 0; b < 946; b++)
	  for (int a = 5; a < 78; a++)
	  {
	    
	     B[a]=B[a-5]/36;
	    
	     C[a][b]=E[a][b]/A[a][b]-D[a]+B[a];
	     C[a+5][b+4]=B[a]-D[a]/E[a][b]+34;
	    
	     int var_a=D[a]/45;
	     int var_b=D[a+2]*38;
	  }

    return 0;
}