#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(340, 1000, "ones");
	int **E = create_two_dim_int(770, 700, "ones");
	int *A = create_one_dim_int(860, "ones");
	int ***C = create_three_dim_int(780, 760, 730, "ones");
	int *D = create_one_dim_int(290, "ones");

	for (int b = 0; b < 998; b++)
	  for (int a = 5; a < 286; a++)
	  {
	    
	     D[a]=D[a+4]/A[a]-E[a][b]+C[a][b][a];
	    
	     B[a][b]=D[a]/E[a][b]-35*A[a];
	     B[a+4][b+2]=A[a]*38/C[a][b][a];
	    
	     int var_a=D[a]+45;
	     int var_b=D[a-5]/26;
	    
	     B[a][b]=D[a]/B[a][b]-0;
	     D[a]=D[a-4]+C[a][b][a]-A[a]/E[a][b];
	    
	     A[a]=A[a]-E[a][b]+B[a][b]/D[a]*C[a][b][a];
	     C[a][b][a]=A[a-3]+D[a]-E[a][b]*B[a][b]/C[a][b][a];
	  }

    return 0;
}