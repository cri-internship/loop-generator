#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(910, 470, 660, "ones");
	int *A = create_one_dim_int(450, "ones");

	for (int a = 5; a < 445; a++)
	{
	  
	    B[a][a][a]=B[a-2][a][a-2]/1;
	  
	    B[a][a][a]=B[a-5][a][a-5]/50;
	  
	    int var_a=A[a]/0;
	    int var_b=A[a+5]+25;
	}

    return 0;
}