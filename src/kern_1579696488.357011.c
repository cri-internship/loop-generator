#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***D = create_three_dim_int(960, 70, 520, "ones");
	int *A = create_one_dim_int(840, "ones");
	int *C = create_one_dim_int(190, "ones");
	int *B = create_one_dim_int(20, "ones");

	for (int a = 2; a < 18; a++)
	{
	  
	    C[a]=12;
	    C[a-2]=8;
	  
	    D[a][a][a]=46;
	    D[a][a+2][a+3]=24;
	  
	    B[a]=45;
	    B[a+2]=30;
	}

    return 0;
}