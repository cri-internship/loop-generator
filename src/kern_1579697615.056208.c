#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(910, 570, "random");
	double **E = create_two_dim_double(510, 800, "random");
	double **D = create_two_dim_double(270, 710, "random");
	double **C = create_two_dim_double(630, 310, "random");
	double ***B = create_three_dim_double(810, 260, 530, "random");

	for (int b = 0; b < 307; b++)
	  for (int a = 0; a < 625; a++)
	  {
	    
	     A[a][b]=A[a+4][b+4]-C[a][b]/D[a][b]*B[a][b][a]+E[a][b];
	    
	     E[a][b]=C[a][b]-A[a][b]/E[a][b]*D[a][b];
	     A[a][b]=C[a+5][b+3]*B[a][b][a]-A[a][b]+D[a][b]/E[a][b];
	  }

    return 0;
}