#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(290, 680, "random");
	int **A = create_two_dim_int(820, 320, "random");
	int **B = create_two_dim_int(800, 820, "random");

	for (int b = 5; b < 320; b++)
	  for (int a = 4; a < 287; a++)
	  {
	    
	     C[a][b]=C[a-4][b-5]/4+B[a][b];
	    
	     C[a][b]=C[a+3][b]+B[a][b];
	    
	     A[a][b]=C[a][b]*B[a][b];
	     A[a-3][b-1]=C[a][b]-B[a][b];
	    
	     A[a][b]=24*C[a][b];
	    
	     int var_a=B[a][b]*47;
	     int var_b=B[a+3][b+1]-27;
	    
	     int var_c=C[a][b]-35;
	     int var_d=C[a-2][b-3]/45;
	  }

    return 0;
}