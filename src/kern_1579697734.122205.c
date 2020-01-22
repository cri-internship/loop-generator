#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(610, 10, "zeros");
	int *C = create_one_dim_int(80, "zeros");
	int ***A = create_three_dim_int(710, 790, 740, "zeros");

	for (int a = 5; a < 606; a++)
	{
	  
	    B[a][a]=B[a+2][a+4]-17;
	  
	    B[a][a]=A[a][a][a];
	  
	    int var_a=A[a][a][a]*35;
	    int var_b=A[a][a+2][a+4]-34;
	  
	    int var_c=A[a][a][a]-29;
	    int var_d=A[a+1][a+3][a+4]-30;
	}

    return 0;
}