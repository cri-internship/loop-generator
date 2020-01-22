#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **D = create_two_dim_int(700, 390, "random");
	int **C = create_two_dim_int(190, 960, "random");
	int ***A = create_three_dim_int(290, 50, 90, "random");
	int ***B = create_three_dim_int(270, 530, 800, "random");
	int ***E = create_three_dim_int(620, 860, 250, "random");

	for (int a = 3; a < 268; a++)
	{
	  
	    B[a][a][a]=B[a+1][a][a+2]-E[a][a][a]+C[a][a]*A[a][a][a]/D[a][a];
	  
	    A[a][a][a]=E[a][a][a]+B[a][a][a]*D[a][a];
	    B[a][a][a]=E[a-2][a-1][a-3]*A[a][a][a]/B[a][a][a]+C[a][a];
	  
	    E[a][a][a]=E[a][a][a]+D[a][a];
	    D[a][a]=E[a-2][a-1][a-2]*B[a][a][a]/D[a][a];
	}

    return 0;
}