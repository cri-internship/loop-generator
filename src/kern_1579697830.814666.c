#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(300, 970, "random");
	int ***B = create_three_dim_int(380, 30, 830, "random");
	int *D = create_one_dim_int(310, "random");
	int **A = create_two_dim_int(780, 770, "random");

	for (int a = 5; a < 297; a++)
	{
	  
	    D[a]=D[a-5]*41;
	  
	    C[a][a]=C[a+3][a+1]*A[a][a]/12+D[a];
	  
	    D[a]=D[a+1]*24;
	  
	    int var_a=B[a][a][a]*42;
	    int var_b=B[a-2][a-5][a-3]/0;
	  
	    int var_c=D[a]*23;
	    int var_d=D[a+3]-46;
	}

    return 0;
}