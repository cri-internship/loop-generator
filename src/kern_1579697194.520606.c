#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(350, 880, "zeros");
	int **A = create_two_dim_int(960, 30, "zeros");

	for (int a = 4; a < 347; a++)
	{
	  
	    B[a][a]=14;
	    B[a][a+3]=15;
	  
	    B[a][a]=16;
	  
	    int var_a=B[a][a]/48;
	    int var_b=B[a-2][a-2]*14;
	}

    return 0;
}