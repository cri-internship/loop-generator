#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **E = create_two_dim_int(960, 960, "ones");
	int *C = create_one_dim_int(880, "ones");
	int ***B = create_three_dim_int(590, 440, 420, "ones");
	int **A = create_two_dim_int(180, 710, "ones");
	int *D = create_one_dim_int(40, "ones");

	for (int b = 3; b < 435; b++)
	  for (int a = 5; a < 176; a++)
	  {
	    
	     A[a][b]=A[a-5][b-3]-C[a];
	    
	     A[a][b]=A[a-3][b-3]/E[a][b]*20-B[a][b][a];
	    
	     C[a]=C[a]+A[a][b];
	     E[a][b]=C[a+1]/D[a]-B[a][b][a]+21;
	    
	     D[a]=B[a][b][a]*D[a]-C[a]/E[a][b]+A[a][b];
	     A[a][b]=B[a+3][b+5][a+4]+E[a][b]/C[a]-D[a];
	    
	     int var_a=A[a][b]*15;
	     int var_b=A[a+4][b+5]+17;
	  }

    return 0;
}