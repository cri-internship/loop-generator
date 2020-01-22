#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *E = create_one_dim_double(230, "random");
	double ***D = create_three_dim_double(220, 120, 370, "random");
	double **C = create_two_dim_double(800, 370, "random");
	double **A = create_two_dim_double(890, 750, "random");
	double ***B = create_three_dim_double(450, 430, 320, "random");

	for (int a = 5; a < 220; a++)
	{
	  
	    C[a][a]=C[a+2][a+5]-0.658;
	  
	    B[a][a][a]=B[a+2][a][a+4]/0.505;
	  
	    E[a]=E[a+1]-C[a][a]/D[a][a][a]*B[a][a][a];
	  
	    D[a][a][a]=0.285;
	    D[a-4][a-5][a-1]=0.791;
	}

    return 0;
}