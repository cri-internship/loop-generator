#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *E = create_one_dim_int(270, "random");
	int **B = create_two_dim_int(120, 970, "random");
	int **C = create_two_dim_int(740, 480, "random");
	int *A = create_one_dim_int(190, "random");
	int **D = create_two_dim_int(120, 220, "random");

	for (int b = 4; b < 189; b++)
	  for (int a = 4; a < 189; a++)
	  {
	    
	     A[a]=A[a-4]+B[a][b]*C[a][b]/D[a][b]-E[a];
	    
	     C[a][b]=E[a]+A[a]/A[a]*D[a][b];
	     E[a]=28;
	    
	     A[a]=A[a]/E[a]*D[a][b];
	     E[a]=A[a+1]*D[a][b];
	  }

    return 0;
}