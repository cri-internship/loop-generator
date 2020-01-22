#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(220, "zeros");
	double *C = create_one_dim_double(290, "zeros");
	double **B = create_two_dim_double(120, 690, "zeros");
	double ***E = create_three_dim_double(720, 600, 630, "zeros");
	double **A = create_two_dim_double(620, 760, "zeros");

	for (int a = 5; a < 220; a++)
	{
	  
	    C[a]=C[a-1]/B[a][a]*A[a][a]+E[a][a][a];
	  
	    E[a][a][a]=E[a-5][a-5][a-1]-0.744;
	  
	    A[a][a]=A[a+4][a]-0.756;
	  
	    double var_a=D[a]+0.773;
	    double var_b=D[a-2]+0.399;
	}

    return 0;
}