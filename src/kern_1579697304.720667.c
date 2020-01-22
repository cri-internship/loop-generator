#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(160, 780, 550, "zeros");
	float **A = create_two_dim_float(240, 820, "zeros");
	float **D = create_two_dim_float(410, 480, "zeros");
	float **C = create_two_dim_float(550, 620, "zeros");

	for (int a = 5; a < 160; a++)
	{
	  
	    C[a][a]=C[a-5][a-1]+0.433;
	  
	    C[a][a]=C[a+5][a]/0.381;
	  
	    D[a][a]=C[a][a]/B[a][a][a]+A[a][a];
	    D[a][a+5]=A[a][a];
	  
	    C[a][a]=B[a][a][a]+D[a][a]*A[a][a]/D[a][a];
	    D[a][a]=B[a-4][a-4][a-4]+D[a][a]*C[a][a]-0.985;
	}

    return 0;
}