// Alta Fang, 2017
//
// Solve Poisson's equation in 3D using PETSc.
// 
// To run on two processors, execute  for example:
//    mpiexec -np 2 ./solve_poisson

#include <petscsys.h>
#include "poisson_solver_3D.hpp"
#include <cmath>

int main(int argc,char **args)
{
    PetscInitialize(&argc,&args,NULL,NULL);

    // Create a PoissonSolver
    PoissonSolver3D *solver = new PoissonSolver3D();
    
    // Run the solver
    solver->run_solver();
    
    // Cleanup
    delete solver;
    
    PetscFinalize();
    
    return 0;
}
