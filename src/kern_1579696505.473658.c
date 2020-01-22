#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***E = create_three_dim_double(340, 790, 110, "random");
	double *D = create_one_dim_double(920, "random");
	double ***A = create_three_dim_double(250, 260, 420, "random");
	double **B = create_two_dim_double(580, 240, "random");
	double *C = create_one_dim_double(740, "random");

	for (int a = 0; a < 336; a++)
	{
	  
	    double var_a=D[a]+0.19;
	    D[a]=0.987;
	  
	    C[a]=C[a+4]/0.521;
	  
	    C[a]=E[a][a][a]/B[a][a];
	    A[a][a][a]=E[a+3][a+4][a+2]*A[a][a][a]-C[a]/D[a];
	  
	    double var_b=B[a][a]/0.323;
	    double var_c=B[a+3][a+3]*0.999;
	}

    return 0;
}