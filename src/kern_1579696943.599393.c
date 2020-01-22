#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(200, 30, "random");
	double **A = create_two_dim_double(390, 810, "random");
	double ***C = create_three_dim_double(170, 550, 310, "random");

	for (int b = 5; b < 30; b++)
	  for (int a = 5; a < 166; a++)
	  {
	    
	     C[a][b][a]=C[a-5][b-5][a-4]+A[a][b]*B[a][b];
	    
	     C[a][b][a]=C[a-1][b-3][a-5]/0.995;
	    
	     C[a][b][a]=C[a-5][b-3][a-3]/B[a][b]+0.686;
	    
	     C[a][b][a]=C[a+2][b+3][a+4]*0.451;
	    
	     A[a][b]=A[a+4][b+5]-0.057;
	    
	     C[a][b][a]=B[a][b]-C[a][b][a]*A[a][b];
	     B[a][b]=B[a-1][b]/C[a][b][a]+0.229;
	  }

    return 0;
}