#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***E = create_three_dim_int(530, 890, 130, "zeros");
	int ***B = create_three_dim_int(490, 780, 500, "zeros");
	int ***A = create_three_dim_int(370, 320, 560, "zeros");
	int ***C = create_three_dim_int(30, 500, 460, "zeros");
	int *D = create_one_dim_int(280, "zeros");

	for (int a = 0; a < 485; a++)
	{
	  
	    B[a][a][a]=40;
	    B[a+5][a+4][a+2]=21;
	}

    return 0;
}