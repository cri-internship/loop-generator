#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(600, 520, "ones");
	int ***E = create_three_dim_int(180, 580, 680, "ones");
	int *B = create_one_dim_int(730, "ones");
	int ***A = create_three_dim_int(770, 980, 840, "ones");
	int **D = create_two_dim_int(910, 770, "ones");

	for (int b = 3; b < 515; b++)
	  for (int a = 4; a < 175; a++)
	  {
	    
	     E[a][b][a]=E[a][b+3][a+5]-46;
	    
	     C[a][b]=C[a][b+5]/20;
	    
	     D[a][b]=D[a+3][b]-E[a][b][a]*A[a][b][a];
	    
	     B[a]=D[a][b]*C[a][b]-8+D[a][b];
	     B[a]=E[a][b][a]*C[a][b]/A[a][b][a];
	    
	     E[a][b][a]=43;
	    
	     A[a][b][a]=B[a]-B[a]*C[a][b]+D[a][b];
	     A[a][b-3][a-4]=E[a][b][a]-B[a]/C[a][b]*D[a][b];
	  }

    return 0;
}