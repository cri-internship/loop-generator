#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *E = create_one_dim_double(620, "ones");
	double **D = create_two_dim_double(520, 360, "ones");
	double ***B = create_three_dim_double(500, 690, 80, "ones");
	double ***A = create_three_dim_double(510, 480, 680, "ones");
	double *C = create_one_dim_double(850, "ones");

	for (int a = 5; a < 495; a++)
	{
	  
	    D[a][a]=D[a-4][a-2]*E[a]-B[a][a][a];
	  
	    E[a]=0.469;
	    float  var_a=E[a]*0.452;
	  
	    A[a][a][a]=A[a-4][a-5][a-4]/0.312;
	  
	    B[a][a][a]=C[a]/A[a][a][a]-D[a][a]+E[a];
	    B[a-1][a][a-3]=C[a];
	  
	    E[a]=B[a][a][a]/C[a]*D[a][a];
	    C[a]=B[a+5][a+4][a+1]-D[a][a]/C[a]+0.625;
	  
	    double var_b=E[a]-0.807;
	    double var_c=E[a-4]*0.432;
	  
	    B[a][a][a]=C[a]/0.541;
	    D[a][a]=C[a+2]+D[a][a]*E[a];
	}

    return 0;
}