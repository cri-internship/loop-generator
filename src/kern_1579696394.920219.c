#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***D = create_three_dim_int(980, 680, 400, "zeros");
	int *B = create_one_dim_int(420, "zeros");
	int **A = create_two_dim_int(80, 620, "zeros");
	int **C = create_two_dim_int(50, 890, "zeros");
	int *E = create_one_dim_int(440, "zeros");

	for (int a = 5; a < 80; a++)
	{
	  
	    B[a]=B[a+1]-C[a][a];
	  
	    int var_a=A[a][a]-48;
	    int var_b=A[a-4][a-5]/50;
	}

    return 0;
}