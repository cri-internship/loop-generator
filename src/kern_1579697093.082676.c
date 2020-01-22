#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(250, "random");
	int ***B = create_three_dim_int(840, 410, 260, "random");
	int *D = create_one_dim_int(340, "random");
	int ***C = create_three_dim_int(650, 530, 630, "random");

	for (int a = 0; a < 245; a++)
	{
	  
	    A[a]=A[a+5]-1;
	  
	    B[a][a][a]=7;
	    B[a][a+3][a+3]=4;
	  
	    int var_a=B[a][a][a]+23;
	    int var_b=B[a+1][a+3][a]-36;
	}

    return 0;
}