#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(470, 160, 170, "random");
	double **E = create_two_dim_double(880, 400, "random");
	double **C = create_two_dim_double(910, 430, "random");
	double ***D = create_three_dim_double(380, 530, 200, "random");
	double ***B = create_three_dim_double(170, 540, 230, "random");

	for (int a = 0; a < 166; a++)
	{
	  
	    B[a][a][a]=B[a+4][a][a]*A[a][a][a]+C[a][a]/0.893;
	}

    return 0;
}