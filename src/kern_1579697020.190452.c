#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *E = create_one_dim_double(930, "zeros");
	double ***A = create_three_dim_double(1000, 370, 410, "zeros");
	double *B = create_one_dim_double(220, "zeros");
	double ***C = create_three_dim_double(340, 460, 690, "zeros");
	double *D = create_one_dim_double(80, "zeros");

	for (int a = 5; a < 76; a++)
	{
	  
	    A[a][a][a]=A[a][a-1][a-5]-0.73;
	  
	    A[a][a][a]=A[a+4][a+4][a+2]-0.055;
	  
	    D[a]=0.202;
	    D[a+4]=0.489;
	  
	    double var_a=E[a]*0.625;
	    double var_b=E[a-1]-0.169;
	  
	    double var_c=C[a][a][a]*0.301;
	    double var_d=C[a+1][a+5][a+1]/0.806;
	}

    return 0;
}