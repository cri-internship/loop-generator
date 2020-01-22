#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(600, "random");
	int **B = create_two_dim_int(260, 70, "random");
	int *C = create_one_dim_int(950, "random");

	for (int a = 5; a < 260; a++)
	{
	  
	    C[a]=C[a-1]+B[a][a]*A[a];
	  
	    B[a][a]=B[a-5][a-2]/36;
	  
	    C[a]=45;
	  
	    int var_a=C[a]*17;
	    int var_b=C[a-5]*37;
	  
	    int var_c=C[a]*5;
	    int var_d=C[a-2]*17;
	  
	    int var_e=A[a]/42;
	    int var_f=A[a-2]/20;
	}

    return 0;
}