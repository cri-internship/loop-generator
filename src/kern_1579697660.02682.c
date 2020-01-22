#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(870, 940, 390, "zeros");
	int **B = create_two_dim_int(780, 910, "zeros");
	int ***E = create_three_dim_int(500, 50, 610, "zeros");
	int **D = create_two_dim_int(150, 40, "zeros");
	int ***C = create_three_dim_int(280, 970, 740, "zeros");

	for (int a = 4; a < 145; a++)
	{
	  
	    E[a][a][a]=E[a][a][a+3]*37;
	  
	    E[a][a][a]=20;
	  
	    int var_a=D[a][a]/47;
	    int var_b=D[a+3][a+5]+38;
	}

    return 0;
}