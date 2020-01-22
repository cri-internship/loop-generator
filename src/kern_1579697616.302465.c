#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(850, 380, "random");
	int **E = create_two_dim_int(390, 690, "random");
	int **C = create_two_dim_int(280, 980, "random");
	int ***D = create_three_dim_int(820, 680, 350, "random");
	int *A = create_one_dim_int(950, "random");

	for (int b = 5; b < 378; b++)
	  for (int a = 5; a < 390; a++)
	  {
	    
	     A[a]=B[a][b]*C[a][b]/E[a][b];
	     C[a][b]=A[a]-D[a][b][a]+E[a][b]/D[a][b][a]*B[a][b];
	    
	     E[a][b]=E[a-5][b-5]+A[a]-C[a][b]/D[a][b][a]*A[a];
	    
	     B[a][b]=B[a+3][b]+13;
	    
	     B[a][b]=4;
	    
	     D[a][b][a]=D[a][b][a]+44;
	     E[a][b]=D[a+5][b+5][a+3]+C[a][b]/46;
	    
	     B[a][b]=B[a][b]*D[a][b][a];
	     A[a]=B[a-5][b-3]*A[a]-D[a][b][a]+1;
	  }

    return 0;
}