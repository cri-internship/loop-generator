#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(90, 780, "random");
	int ***A = create_three_dim_int(320, 490, 650, "random");
	int **D = create_two_dim_int(270, 940, "random");
	int **C = create_two_dim_int(870, 230, "random");

	for (int b = 2; b < 228; b++)
	  for (int a = 1; a < 87; a++)
	  {
	    
	     B[a][b]=B[a+3][b+4]+C[a][b]-A[a][b][a]/D[a][b];
	    
	     C[a][b]=C[a][b+2]+43;
	    
	     D[a][b]=44;
	     D[a][b]=C[a][b]*B[a][b];
	    
	     B[a][b]=C[a][b]*A[a][b][a];
	    
	     int var_a=C[a][b]/45;
	     int var_b=C[a+3][b+1]/2;
	  }

    return 0;
}