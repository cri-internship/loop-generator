#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *E = create_one_dim_int(600, "zeros");
	int **C = create_two_dim_int(300, 140, "zeros");
	int ***D = create_three_dim_int(630, 490, 800, "zeros");
	int ***B = create_three_dim_int(310, 780, 200, "zeros");
	int *A = create_one_dim_int(930, "zeros");

	for (int b = 3; b < 139; b++)
	  for (int a = 5; a < 300; a++)
	  {
	    
	     E[a]=E[a-5]*10;
	    
	     D[a][b][a]=D[a-2][b-1][a-2]-E[a]+B[a][b][a];
	    
	     C[a][b]=C[a][b+1]/D[a][b][a]*A[a]+B[a][b][a];
	    
	     D[a][b][a]=31;
	    
	     int var_a=C[a][b]*33;
	    
	     C[a][b]=E[a]+C[a][b]/B[a][b][a]-C[a][b]*A[a];
	     E[a]=E[a+2]*C[a][b]+B[a][b][a]-D[a][b][a]/A[a];
	    
	     int var_c=E[a]-6;
	     int var_d=E[a-1]*3;
	  }

    return 0;
}