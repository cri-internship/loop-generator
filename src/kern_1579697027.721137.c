#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(550, "random");
	int **A = create_two_dim_int(970, 640, "random");
	int **B = create_two_dim_int(370, 480, "random");
	int ***D = create_three_dim_int(630, 340, 380, "random");
	int **E = create_two_dim_int(190, 80, "random");

	for (int a = 0; a < 367; a++)
	{
	  
	    C[a]=C[a+4]/42;
	  
	    C[a]=C[a+2]*42;
	  
	    C[a]=35;
	  
	    int var_b=B[a][a]/35;
	    int var_c=B[a][a+3]+34;
	  
	    B[a][a]=C[a]-B[a][a]/E[a][a]*D[a][a][a]+A[a][a];
	    E[a][a]=C[a+1]*14;
	  
	    int var_d=C[a]+6;
	}

    return 0;
}