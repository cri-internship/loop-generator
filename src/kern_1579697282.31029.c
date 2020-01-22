#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(50, 760, 850, "ones");
	int *D = create_one_dim_int(460, "ones");
	int *C = create_one_dim_int(250, "ones");
	int **A = create_two_dim_int(150, 940, "ones");

	for (int a = 4; a < 150; a++)
	{
	  
	    C[a]=C[a-3]/7;
	  
	    C[a]=17;
	  
	    D[a]=19;
	    D[a-3]=45;
	  
	    D[a]=24;
	  
	    A[a][a]=38;
	    A[a-4][a-1]=29;
	  
	    int var_a=D[a]/48;
	    int var_b=D[a+1]*13;
	}

    return 0;
}