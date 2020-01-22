#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(900, "ones");
	int *C = create_one_dim_int(830, "ones");
	int ***D = create_three_dim_int(750, 440, 100, "ones");
	int ***B = create_three_dim_int(180, 20, 180, "ones");
	int *E = create_one_dim_int(130, "ones");

	for (int b = 1; b < 19; b++)
	  for (int a = 2; a < 129; a++)
	  {
	    
	     D[a][b][a]=D[a-1][b-1][a]+B[a][b][a]/E[a]*A[a]-24;
	    
	     E[a]=E[a-2]*17;
	    
	     B[a][b][a]=B[a+1][b+1][a]/D[a][b][a]*9;
	    
	     C[a]=C[a+4]/19*B[a][b][a]+D[a][b][a];
	    
	     C[a]=E[a]+B[a][b][a]/C[a]*A[a];
	     B[a][b][a]=E[a+1]-D[a][b][a];
	  }

    return 0;
}