#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **E = create_two_dim_int(770, 100, "random");
	int ***C = create_three_dim_int(300, 640, 80, "random");
	int ***A = create_three_dim_int(300, 630, 160, "random");
	int **D = create_two_dim_int(750, 700, "random");
	int ***B = create_three_dim_int(890, 850, 390, "random");

	for (int a = 0; a < 299; a++)
	{
	  
	    B[a][a][a]=B[a][a+1][a+3]/E[a][a]*A[a][a][a];
	  
	    int var_a=C[a][a][a]+7;
	    int var_b=C[a+1][a][a]/20;
	}

    return 0;
}