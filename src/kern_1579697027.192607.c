#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***D = create_three_dim_int(650, 230, 180, "ones");
	int **B = create_two_dim_int(180, 540, "ones");
	int *C = create_one_dim_int(440, "ones");
	int *A = create_one_dim_int(910, "ones");
	int *E = create_one_dim_int(370, "ones");

	for (int b = 0; b < 226; b++)
	  for (int a = 2; a < 365; a++)
	  {
	    
	     C[a]=E[a]*C[a]-B[a][b];
	     E[a]=A[a]-D[a][b][a];
	    
	     E[a]=E[a+5]-9;
	    
	     A[a]=A[a+4]*E[a];
	    
	     D[a][b][a]=D[a+2][b+1][a]+47;
	    
	     C[a]=C[a+1]/18-E[a];
	    
	     D[a][b][a]=A[a]*14;
	    
	     E[a]=E[a]/A[a]-D[a][b][a]+B[a][b]*C[a];
	     B[a][b]=E[a-2]+A[a]/D[a][b][a]*C[a]-B[a][b];
	  }

    return 0;
}