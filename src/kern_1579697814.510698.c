#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(830, 270, "random");
	float **A = create_two_dim_float(820, 480, "random");
	float ***E = create_three_dim_float(60, 550, 350, "random");
	float **B = create_two_dim_float(40, 250, "random");
	float ***D = create_three_dim_float(850, 770, 750, "random");

	for (int b = 3; b < 245; b++)
	  for (int a = 2; a < 39; a++)
	  {
	    
	     E[a][b][a]=E[a-2][b-3][a]-0.607;
	    
	     A[a][b]=B[a][b]*E[a][b][a]+D[a][b][a]-C[a][b];
	     B[a][b]=A[a][b]+0.076*D[a][b][a];
	    
	     D[a][b][a]=D[a+5][b+4][a+2]-A[a][b];
	    
	     A[a][b]=A[a+1][b+1]/0.153+B[a][b]-E[a][b][a];
	    
	     B[a][b]=D[a][b][a]-E[a][b][a]*0.798+C[a][b];
	    
	     D[a][b][a]=B[a][b]/A[a][b];
	     E[a][b][a]=B[a+1][b+5]+A[a][b]*C[a][b]-D[a][b][a];
	  }

    return 0;
}