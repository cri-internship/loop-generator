#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***D = create_three_dim_int(950, 590, 40, "random");
	int ***A = create_three_dim_int(480, 330, 300, "random");
	int *C = create_one_dim_int(200, "random");
	int **B = create_two_dim_int(140, 530, "random");

	for (int b = 4; b < 325; b++)
	  for (int a = 5; a < 138; a++)
	  {
	    
	     D[a][b][a]=D[a][b-2][a-4]-B[a][b]*A[a][b][a]/C[a];
	    
	     C[a]=C[a-5]*D[a][b][a];
	    
	     int var_a=B[a][b]*32;
	     B[a][b]=30;
	    
	     A[a][b][a]=14;
	     A[a][b+5][a+2]=47;
	    
	     B[a][b]=36;
	    
	     D[a][b][a]=D[a][b][a]*C[a]-B[a][b];
	     A[a][b][a]=D[a+5][b+1][a+3]*B[a][b];
	    
	     B[a][b]=A[a][b][a]/C[a];
	     C[a]=A[a-4][b-4][a-1]*34/B[a][b];
	  }

    return 0;
}