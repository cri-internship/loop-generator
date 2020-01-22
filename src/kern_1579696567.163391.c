#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***E = create_three_dim_int(90, 610, 100, "zeros");
	int *A = create_one_dim_int(800, "zeros");
	int **B = create_two_dim_int(880, 640, "zeros");
	int ***C = create_three_dim_int(690, 910, 400, "zeros");
	int ***D = create_three_dim_int(850, 200, 200, "zeros");

	for (int b = 3; b < 197; b++)
	  for (int a = 4; a < 85; a++)
	  {
	    
	     A[a]=A[a-4]/C[a][b][a]*17-D[a][b][a];
	    
	     D[a][b][a]=D[a+1][b+3][a+5]*B[a][b]-A[a]/C[a][b][a]+E[a][b][a];
	    
	     B[a][b]=B[a+2][b+5]+D[a][b][a]-E[a][b][a]*C[a][b][a]/A[a];
	    
	     E[a][b][a]=25;
	     E[a+2][b+2][a+5]=38;
	    
	     int var_a=E[a][b][a]-32;
	     int var_b=E[a-1][b-2][a-3]/23;
	    
	     E[a][b][a]=B[a][b]+C[a][b][a]*E[a][b][a]/A[a];
	     D[a][b][a]=B[a-2][b-3]/E[a][b][a]*A[a];
	    
	     int var_c=C[a][b][a]*35;
	     int var_d=C[a+4][b+4][a+2]-29;
	  }

    return 0;
}