#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(620, "random");
	int *A = create_one_dim_int(680, "random");
	int **C = create_two_dim_int(1000, 260, "random");
	int *B = create_one_dim_int(220, "random");
	int *E = create_one_dim_int(550, "random");

	for (int a = 4; a < 216; a++)
	{
	  
	    D[a]=D[a-1]-41;
	  
	    B[a]=B[a+4]*1;
	  
	    B[a]=B[a+1]+1;
	  
	    A[a]=E[a]*B[a]-C[a][a];
	    A[a-4]=D[a];
	  
	    int var_a=D[a]+37;
	  
	    int var_c=B[a]*19;
	    int var_d=B[a-3]/28;
	  
	    B[a]=C[a][a]/A[a]*E[a]+D[a]-B[a];
	    E[a]=C[a-3][a-1]+D[a]*A[a]/E[a]-B[a];
	}

    return 0;
}