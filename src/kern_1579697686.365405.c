#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(720, "random");
	int *A = create_one_dim_int(270, "random");
	int *E = create_one_dim_int(880, "random");
	int *D = create_one_dim_int(40, "random");
	int *B = create_one_dim_int(470, "random");

	for (int a = 5; a < 466; a++)
	{
	  
	    C[a]=C[a-5]/A[a]+B[a]-D[a]*E[a];
	  
	    B[a]=B[a+4]/22;
	  
	    B[a]=0;
	  
	    C[a]=39;
	  
	    E[a]=11;
	    E[a+5]=26;
	  
	    int var_b=E[a]*47;
	    int var_c=E[a]/19;
	}

    return 0;
}