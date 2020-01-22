#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(630, 510, 580, "zeros");
	int ***E = create_three_dim_int(650, 580, 580, "zeros");
	int **D = create_two_dim_int(180, 20, "zeros");
	int *A = create_one_dim_int(830, "zeros");
	int **C = create_two_dim_int(870, 50, "zeros");

	for (int a = 4; a < 180; a++)
	{
	  
	    C[a][a]=C[a+1][a+3]/B[a][a][a];
	  
	    D[a][a]=31;
	    D[a-3][a-4]=30;
	  
	    int var_a=C[a][a]/15;
	    int var_b=C[a+2][a+5]+28;
	}

    return 0;
}