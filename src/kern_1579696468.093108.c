#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(950, 720, "zeros");
	int ***E = create_three_dim_int(460, 650, 830, "zeros");
	int *D = create_one_dim_int(690, "zeros");
	int **A = create_two_dim_int(270, 760, "zeros");
	int *B = create_one_dim_int(550, "zeros");

	for (int b = 0; b < 648; b++)
	  for (int a = 5; a < 458; a++)
	  {
	    
	     B[a]=B[a-1]-41;
	    
	     D[a]=D[a-5]*9;
	    
	     D[a]=D[a+1]/C[a][b]-B[a]+A[a][b]*E[a][b][a];
	    
	     D[a]=D[a+3]-E[a][b][a]*C[a][b]+12/A[a][b];
	    
	     int var_a=E[a][b][a]*28;
	     int var_b=E[a-4][b][a-1]/36;
	    
	     B[a]=E[a][b][a]/32+B[a];
	     C[a][b]=E[a+2][b+2][a]-9/D[a]+C[a][b];
	  }

    return 0;
}