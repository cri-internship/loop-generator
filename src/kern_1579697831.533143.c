#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(590, "random");
	int **B = create_two_dim_int(780, 610, "random");
	int *D = create_one_dim_int(570, "random");
	int *C = create_one_dim_int(700, "random");

	for (int a = 3; a < 570; a++)
	{
	  
	    A[a]=A[a-2]*29;
	  
	    float  var_a=A[a]*11;
	  
	    C[a]=C[a+4]/B[a][a]-D[a]*A[a];
	  
	    C[a]=D[a]+C[a]*B[a][a]-42;
	    B[a][a]=D[a-3]/A[a];
	}

    return 0;
}