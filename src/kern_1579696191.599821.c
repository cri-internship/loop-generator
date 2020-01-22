#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(490, "ones");
	int **B = create_two_dim_int(210, 70, "ones");
	int ***A = create_three_dim_int(330, 750, 320, "ones");
	int **E = create_two_dim_int(300, 910, "ones");
	int *D = create_one_dim_int(880, "ones");

	for (int a = 0; a < 297; a++)
	{
	  
	    E[a][a]=3;
	    E[a+3][a+2]=9;
	}

    return 0;
}