#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(420, "random");
	double **B = create_two_dim_double(610, 170, "random");
	double ***C = create_three_dim_double(770, 130, 830, "random");
	double ***A = create_three_dim_double(750, 260, 460, "random");

	for (int a = 5; a < 608; a++)
	{
	  
	    B[a][a]=B[a+1][a+2]/C[a][a][a]+A[a][a][a]*D[a];
	  
	    C[a][a][a]=C[a+4][a+1][a+4]*B[a][a]-A[a][a][a]/D[a];
	  
	    B[a][a]=0.831;
	}

    return 0;
}