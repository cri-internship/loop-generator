#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **D = create_two_dim_int(530, 60, "random");
	int **E = create_two_dim_int(930, 920, "random");
	int ***C = create_three_dim_int(90, 160, 670, "random");
	int ***B = create_three_dim_int(410, 530, 360, "random");
	int **A = create_two_dim_int(510, 520, "random");

	for (int a = 5; a < 85; a++)
	{
	  
	    C[a][a][a]=42;
	    C[a+1][a+4][a]=17;
	  
	    B[a][a][a]=28/D[a][a];
	    B[a-5][a-1][a-5]=C[a][a][a]-17/E[a][a];
	  
	    A[a][a]=C[a][a][a]+B[a][a][a];
	    E[a][a]=C[a+5][a+2][a+4]+B[a][a][a]*A[a][a]/D[a][a]-E[a][a];
	}

    return 0;
}