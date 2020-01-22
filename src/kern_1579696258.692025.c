#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **D = create_two_dim_int(530, 770, "ones");
	int *A = create_one_dim_int(700, "ones");
	int *E = create_one_dim_int(590, "ones");
	int ***C = create_three_dim_int(630, 40, 960, "ones");
	int ***B = create_three_dim_int(960, 220, 910, "ones");

	for (int b = 0; b < 37; b++)
	  for (int a = 4; a < 625; a++)
	  {
	    
	     A[a]=A[a-4]+B[a][b][a]/E[a]-D[a][b]*C[a][b][a];
	    
	     C[a][b][a]=C[a+2][b+2][a+2]+A[a]/A[a];
	    
	     C[a][b][a]=C[a+5][b+3][a+3]+47;
	  }

    return 0;
}