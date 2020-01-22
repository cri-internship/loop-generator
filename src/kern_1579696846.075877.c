#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **E = create_two_dim_int(820, 70, "ones");
	int **B = create_two_dim_int(340, 730, "ones");
	int **C = create_two_dim_int(510, 80, "ones");
	int **A = create_two_dim_int(330, 440, "ones");
	int *D = create_one_dim_int(480, "ones");

	for (int a = 0; a < 816; a++)
	{
	  
	    E[a][a]=47;
	    E[a+2][a+4]=31;
	}

    return 0;
}