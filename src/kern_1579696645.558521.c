#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(930, 940, "random");
	int **B = create_two_dim_int(340, 890, "random");
	int ***A = create_three_dim_int(480, 570, 620, "random");

	for (int a = 5; a < 337; a++)
	{
	  
	    C[a][a]=C[a+4][a+5]+A[a][a][a]*B[a][a];
	  
	    B[a][a]=B[a+3][a+3]-C[a][a]+A[a][a][a];
	  
	    B[a][a]=C[a][a]/A[a][a][a];
	    C[a][a]=C[a+3][a+4]+A[a][a][a];
	  
	    A[a][a][a]=B[a][a]+C[a][a]-A[a][a][a];
	    B[a][a]=B[a-1][a-5]-21;
	  
	    int var_a=A[a][a][a]*46;
	    int var_b=A[a][a-2][a-2]+17;
	}

    return 0;
}