#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(480, 370, "zeros");
	int ***A = create_three_dim_int(190, 870, 390, "zeros");
	int *B = create_one_dim_int(620, "zeros");

	for (int a = 5; a < 187; a++)
	{
	  
	    C[a][a]=C[a-5][a]*35;
	  
	    A[a][a][a]=A[a+3][a+2][a+1]/C[a][a]-B[a];
	  
	    int var_a=C[a][a]-0;
	    int var_b=C[a-4][a]*21;
	}

    return 0;
}