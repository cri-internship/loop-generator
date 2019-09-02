#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim(50, 50);
	float ***C = create_three_dim(50, 50, 50);
	float *A = create_one_dim(100);

	for (int b = 0; b < 50; b++)
	  for (int a = 0; a < 50; a++)
	  {
	    
	    C[a]=0.23926;
	    B[a][b]=C[a]*0.45111;
	    
	    A[a]=A[a-1]*B[a][b]+C[a][b][a]-A[a];
	    
	    A[a]=C[a]*0.97016;
	    C[a]=0.85527;
	    
	    A[a]=A[a+1]-A[a]+C[a][b][a]/B[a][b]*C[a][b][a]/A[a]*B[a][b]-C[a][b][a];
	    
	    C[a]=0.61172;
	    C[a]=0.1859;
	    
	    A[a]=A[a]/C[a][b][a]-B[a][b]+A[a]*B[a][b]/C[a][b][a]+A[a];
	    A[a]=C[a][b][a]+B[a][b]/A[a]*B[a][b]-C[a][b][a]*A[a]/A[a]+B[a][b]/C[a][b][a];
	    
	    A[a]=C[a]-0.19466;
	    A[a]=C[a]-0.30238;
	    
	    A[a]=A[a+1]/C[a][b][a]*B[a][b]-0.75678+A[a]/B[a][b]+C[a][b][a]*C[a][b][a]-A[a]*B[a][b];
	    B[a][b]=A[a+1]*C[a][b][a]+A[a]/B[a][b]-B[a][b]+C[a][b][a];
	  }

    return 0;
}