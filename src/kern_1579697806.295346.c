#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(950, "zeros");
	double **B = create_two_dim_double(750, 380, "zeros");
	double *D = create_one_dim_double(890, "zeros");
	double **C = create_two_dim_double(660, 390, "zeros");

	for (int a = 5; a < 656; a++)
	{
	  
	    A[a]=0.556;
	    A[a-1]=D[a];
	  
	    C[a][a]=B[a][a];
	    C[a-5][a-4]=A[a];
	  
	    double var_a=D[a]/0.76;
	  
	    B[a][a]=C[a][a]+D[a]-B[a][a];
	    C[a][a]=C[a+2][a+4]*B[a][a]/D[a];
	  
	    double var_c=D[a]*0.064;
	    double var_d=D[a+4]+0.508;
	  
	    double var_e=C[a][a]*0.103;
	    double var_f=C[a+4][a+1]+0.262;
	  
	    D[a]=C[a][a]+D[a]/B[a][a]*A[a];
	    A[a]=C[a][a-1]/D[a]*B[a][a];
	}

    return 0;
}