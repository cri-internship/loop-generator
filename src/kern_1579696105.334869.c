#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **D = create_two_dim_int(750, 360, "ones");
	int ***E = create_three_dim_int(670, 530, 420, "ones");
	int ***A = create_three_dim_int(620, 670, 240, "ones");
	int **B = create_two_dim_int(80, 410, "ones");
	int *C = create_one_dim_int(580, "ones");

	for (int b = 1; b < 355; b++)
	  for (int a = 5; a < 577; a++)
	  {
	    
	     D[a][b]=D[a][b+5]*15;
	    
	     C[a]=26*E[a][b][a];
	     C[a+3]=A[a][b][a]-D[a][b]/A[a][b][a]+D[a][b];
	    
	     C[a]=45;
	    
	     D[a][b]=E[a][b][a]*23-C[a];
	     C[a]=E[a][b-1][a-3]/C[a]*A[a][b][a]-D[a][b]+B[a][b];
	  }

    return 0;
}