#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(390, "ones");
	int *C = create_one_dim_int(720, "ones");
	int **D = create_two_dim_int(650, 840, "ones");
	int **A = create_two_dim_int(540, 240, "ones");

	for (int a = 4; a < 385; a++)
	{
	  
	    D[a][a]=D[a-1][a-3]*B[a]+C[a]-A[a][a];
	  
	    A[a][a]=A[a][a+2]-D[a][a];
	  
	    C[a]=C[a+4]+D[a][a]*A[a][a]/B[a];
	  
	    A[a][a]=C[a]*D[a][a]/31;
	  
	    D[a][a]=C[a];
	  
	    int var_a=B[a]-22;
	    int var_b=B[a+5]-48;
	  
	    int var_c=C[a]+1;
	    int var_d=C[a+1]-8;
	}

    return 0;
}