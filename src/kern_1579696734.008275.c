#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(830, 990, "random");
	float ***A = create_three_dim_float(510, 100, 360, "random");
	float ***C = create_three_dim_float(850, 480, 280, "random");
	float **D = create_two_dim_float(620, 320, "random");

	for (int b = 5; b < 100; b++)
	  for (int a = 4; a < 510; a++)
	  {
	    
	     A[a][b][a]=A[a-3][b-4][a-4]+0.07;
	    
	     B[a][b]=B[a-1][b-5]*C[a][b][a];
	    
	     B[a][b]=B[a+2][b+4]-A[a][b][a]+D[a][b]*C[a][b][a];
	    
	     C[a][b][a]=0.585;
	     C[a+3][b+1][a+5]=0.749;
	    
	     D[a][b]=C[a][b][a]+B[a][b];
	     A[a][b][a]=C[a+5][b+5][a+1]-B[a][b]*A[a][b][a];
	  }

    return 0;
}