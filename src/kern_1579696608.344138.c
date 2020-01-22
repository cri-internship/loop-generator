#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(740, 130, 650, "ones");
	int *A = create_one_dim_int(840, "ones");
	int *B = create_one_dim_int(550, "ones");
	int ***D = create_three_dim_int(110, 460, 670, "ones");
	int *E = create_one_dim_int(1000, "ones");

	for (int a = 5; a < 840; a++)
	{
	  
	    E[a]=E[a+4]*16;
	  
	    A[a]=36;
	    A[a-5]=1;
	}

    return 0;
}