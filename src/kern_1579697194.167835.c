#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(620, "zeros");
	int ***B = create_three_dim_int(550, 510, 160, "zeros");
	int ***C = create_three_dim_int(90, 520, 180, "zeros");

	for (int a = 0; a < 85; a++)
	{
	  
	    B[a][a][a]=B[a+3][a+5][a+4]/C[a][a][a];
	  
	    C[a][a][a]=C[a+4][a+5][a]*14;
	}

    return 0;
}