#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(700, 570, "random");
	int ***C = create_three_dim_int(460, 40, 90, "random");
	int *D = create_one_dim_int(610, "random");
	int **A = create_two_dim_int(870, 400, "random");
	int **E = create_two_dim_int(310, 430, "random");

	for (int a = 5; a < 305; a++)
	{
	  
	    C[a][a][a]=C[a-3][a][a-2]/B[a][a];
	  
	    int var_a=D[a]+5;
	    D[a]=7;
	  
	    E[a][a]=E[a+5][a+3]-16;
	  
	    C[a][a][a]=A[a][a]-E[a][a]/D[a];
	  
	    int var_b=C[a][a][a]-19;
	    int var_c=C[a+4][a][a+3]/7;
	}

    return 0;
}