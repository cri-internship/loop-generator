#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(290, 910, 660, "zeros");
	int ***D = create_three_dim_int(630, 960, 670, "zeros");
	int **E = create_two_dim_int(630, 590, "zeros");
	int **B = create_two_dim_int(550, 230, "zeros");
	int *C = create_one_dim_int(170, "zeros");

	for (int b = 5; b < 585; b++)
	  for (int a = 5; a < 170; a++)
	  {
	    
	     D[a][b][a]=D[a-1][b-5][a]+4;
	    
	     C[a]=E[a][b]/22;
	     C[a]=D[a][b][a]-B[a][b]/E[a][b];
	    
	     D[a][b][a]=C[a];
	    
	     E[a][b]=B[a][b]+C[a]/A[a][b][a];
	     E[a+2][b+5]=A[a][b][a]-B[a][b]*C[a]/D[a][b][a];
	    
	     int var_a=E[a][b]*38;
	     int var_b=E[a-5][b-5]*19;
	    
	     C[a]=C[a]-A[a][b][a]*B[a][b]/D[a][b][a];
	     E[a][b]=C[a-3]+B[a][b]*A[a][b][a]-D[a][b][a];
	  }

    return 0;
}