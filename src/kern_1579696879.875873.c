#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(50, "random");
	int **E = create_two_dim_int(220, 270, "random");
	int **C = create_two_dim_int(1000, 490, "random");
	int **B = create_two_dim_int(750, 280, "random");
	int *A = create_one_dim_int(300, "random");

	for (int b = 0; b < 270; b++)
	  for (int a = 0; a < 45; a++)
	  {
	    
	     E[a][b]=D[a]+34*C[a][b];
	     B[a][b]=E[a][b]*A[a]-B[a][b]/D[a];
	    
	     D[a]=D[a]+26*A[a]-E[a][b]/C[a][b];
	     E[a][b]=D[a+5]+A[a]*B[a][b];
	    
	     int var_a=A[a]+38;
	     int var_b=A[a+1]/22;
	  }

    return 0;
}