#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(50, 440, "ones");
	int **A = create_two_dim_int(420, 680, "ones");
	int ***C = create_three_dim_int(460, 50, 370, "ones");

	for (int b = 3; b < 47; b++)
	  for (int a = 1; a < 50; a++)
	  {
	    
	     B[a][b]=B[a][b-3]/21;
	    
	     C[a][b][a]=A[a][b]-B[a][b];
	     C[a+4][b+3][a]=B[a][b]*A[a][b];
	    
	     C[a][b][a]=C[a][b][a]*30;
	     B[a][b]=C[a+5][b+3][a]-A[a][b];
	    
	     int var_a=A[a][b]+6;
	     int var_b=A[a+1][b]*3;
	    
	     A[a][b]=B[a][b]-C[a][b][a];
	     B[a][b]=B[a-1][b]+C[a][b][a]*A[a][b];
	  }

    return 0;
}