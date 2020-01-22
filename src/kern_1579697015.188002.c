#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(510, 820, "ones");
	int ***A = create_three_dim_int(910, 880, 750, "ones");
	int ***C = create_three_dim_int(10, 620, 530, "ones");

	for (int a = 0; a < 5; a++)
	{
	  
	    C[a][a][a]=C[a+5][a][a]+B[a][a]-A[a][a][a];
	  
	    int var_a=B[a][a]/32;
	    int var_b=B[a+1][a+4]+16;
	}

    return 0;
}