#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(980, "random");
	int *E = create_one_dim_int(960, "random");
	int *A = create_one_dim_int(560, "random");
	int ***D = create_three_dim_int(80, 940, 740, "random");
	int ***C = create_three_dim_int(410, 690, 40, "random");

	for (int c = 0; c < 736; c++)
	  for (int b = 0; b < 938; b++)
	    for (int a = 5; a < 79; a++)
	    {
	      
	      B[a]=B[a-5]+14;
	      
	      B[a]=B[a-3]+32;
	      
	      D[a][b][c]=A[a];
	      D[a+1][b+2][c+4]=49;
	      
	      E[a]=B[a]-D[a][b][c]+E[a];
	      B[a]=B[a+4]-C[a][b][c];
	      
	      int var_a=B[a]+8;
	    }

    return 0;
}