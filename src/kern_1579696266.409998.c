#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **D = create_two_dim_int(790, 800, "ones");
	int *C = create_one_dim_int(750, "ones");
	int **B = create_two_dim_int(680, 760, "ones");
	int *A = create_one_dim_int(620, "ones");
	int **E = create_two_dim_int(420, 370, "ones");

	for (int a = 2; a < 620; a++)
	{
	  
	    D[a][a]=31;
	    float  var_a=D[a][a]*3;
	  
	    C[a]=C[a+2]*A[a]/D[a][a]-E[a][a];
	  
	    D[a][a]=D[a+5][a+3]*8;
	  
	    D[a][a]=D[a][a]/B[a][a];
	    B[a][a]=D[a][a-2]+C[a]/E[a][a]-A[a]*B[a][a];
	  
	    C[a]=A[a]-C[a]/E[a][a]+D[a][a]*B[a][a];
	    E[a][a]=A[a-1]+C[a]*D[a][a]/E[a][a]-B[a][a];
	}

    return 0;
}