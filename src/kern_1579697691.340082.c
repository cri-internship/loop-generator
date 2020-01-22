#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(930, "zeros");
	int ***C = create_three_dim_int(510, 300, 140, "zeros");
	int *B = create_one_dim_int(280, "zeros");

	for (int a = 4; a < 276; a++)
	{
	  
	    C[a][a][a]=C[a-2][a-4][a]-13;
	  
	    A[a]=C[a][a][a];
	    B[a]=A[a]/B[a]*C[a][a][a];
	  
	    A[a]=A[a+4]+C[a][a][a]-B[a];
	  
	    A[a]=B[a]*A[a];
	    C[a][a][a]=B[a+4]+C[a][a][a]-A[a];
	  
	    int var_c=B[a]-44;
	    int var_d=B[a-2]*7;
	}

    return 0;
}