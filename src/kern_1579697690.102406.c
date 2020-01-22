#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(480, 180, "zeros");
	int ***B = create_three_dim_int(150, 520, 10, "zeros");

	for (int a = 5; a < 150; a++)
	{
	  
	    B[a][a][a]=B[a-3][a-1][a-2]*19;
	  
	    B[a][a][a]=B[a][a-5][a-5]*12;
	  
	    int var_a=B[a][a][a]-7;
	    int var_b=B[a-2][a-4][a-5]+45;
	}

    return 0;
}