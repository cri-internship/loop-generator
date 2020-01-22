#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(870, 330, 700, "zeros");
	int ***C = create_three_dim_int(310, 170, 530, "zeros");
	int ***B = create_three_dim_int(510, 720, 420, "zeros");

	for (int a = 2; a < 310; a++)
	{
	  
	    B[a][a][a]=B[a-2][a-1][a-2]+23;
	  
	    C[a][a][a]=C[a][a-2][a-1]+B[a][a][a];
	}

    return 0;
}