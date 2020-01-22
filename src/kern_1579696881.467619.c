#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(350, 160, 350, "random");
	int *A = create_one_dim_int(710, "random");

	for (int a = 5; a < 350; a++)
	{
	  
	    B[a][a][a]=B[a-2][a-2][a-5]-26;
	  
	    A[a]=48;
	    float  var_a=A[a]/33;
	  
	    B[a][a][a]=B[a-4][a-5][a-5]/13;
	  
	    A[a]=21;
	  
	    B[a][a][a]=A[a]/B[a][a][a];
	}

    return 0;
}