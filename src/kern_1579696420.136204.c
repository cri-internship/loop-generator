#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(170, 250, "random");
	int **C = create_two_dim_int(50, 20, "random");
	int **B = create_two_dim_int(100, 160, "random");

	for (int a = 4; a < 48; a++)
	{
	  
	    A[a][a]=A[a-4][a-3]-22;
	  
	    C[a][a]=C[a-3][a-2]/A[a][a]-B[a][a];
	  
	    B[a][a]=B[a+3][a+5]-C[a][a]/A[a][a];
	  
	    B[a][a]=18;
	  
	    int var_a=C[a][a]/32;
	    int var_b=C[a+2][a+1]-10;
	  
	    int var_c=C[a][a]*14;
	    int var_d=C[a-3][a-3]*27;
	  
	    int var_e=B[a][a]/41;
	    int var_f=B[a-2][a-4]*45;
	}

    return 0;
}