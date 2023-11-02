/*
 * This file was autogenerated by TinyMPC on Thu Nov  2 19:26:25 2023
 */

#include <tinympc/tiny_data_workspace.hpp>

#ifdef __cplusplus
extern "C" {
#endif

/* User settings */
TinySettings settings = {
	(tinytype)0.0010000000474975,	// primal tolerance
	(tinytype)0.0010000000474975,	// dual tolerance
	100,		// max iterations
	1,		// iterations per termination check
	1,		// enable state constraints
	1		// enable input constraints
};

/* Matrices that must be recomputed with changes in time step, rho */
TinyCache cache = {
	(tinytype)0.1000000014901161,	// rho (step size/penalty)
	(tiny_MatrixNuNx() << (tinytype)1.3597781658172607,(tinytype)-0.6322785615921021,(tinytype)0.5334640145301819,(tinytype)-0.1066229641437531).finished(),
	(tiny_MatrixNxNx() << (tinytype)8.8987751007080078,(tinytype)2.6635909080505371,(tinytype)2.6635851860046387,(tinytype)2.0459718704223633).finished(),
	(tiny_MatrixNuNu() << (tinytype)0.1075823605060577,(tinytype)-0.0979942381381989,(tinytype)-0.0979942679405212,(tinytype)0.0952188968658447).finished(),
	(tiny_MatrixNxNu() << (tinytype)-0.5502200126647949,(tinytype)-0.1739002466201782,(tinytype)1.5529441833496094,(tinytype)0.5062308311462402).finished(),
	(tiny_MatrixNxNu() << (tinytype)-0.0000038146972656,(tinytype)-0.0000114440917969,(tinytype)-0.0000021457672119,(tinytype)-0.0000149905681610).finished(),
};

/* Problem variables */
TinyWorkspace work = {
	(tiny_MatrixNxNh() << (tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000).finished(),
	(tiny_MatrixNuNhm1() << (tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000).finished(),
	(tiny_MatrixNxNh() << (tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000).finished(),
	(tiny_MatrixNuNhm1() << (tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000).finished(),
	(tiny_MatrixNxNh() << (tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000).finished(),
	(tiny_MatrixNuNhm1() << (tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000).finished(),
	(tiny_MatrixNxNh() << (tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000).finished(),
	(tiny_MatrixNxNh() << (tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000).finished(),
	(tiny_MatrixNuNhm1() << (tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000).finished(),
	(tiny_MatrixNuNhm1() << (tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000).finished(),
	(tiny_MatrixNxNh() << (tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000).finished(),
	(tiny_MatrixNuNhm1() << (tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000).finished(),
	(tinytype)0.0000000000000000,	// state primal residual
	(tinytype)0.0000000000000000,	// input primal residual
	(tinytype)0.0000000000000000,	// state dual residual
	(tinytype)0.0000000000000000,	// input dual residual
	0,	// solve status
	0,	// solve iteration
	(tiny_VectorNx() << (tinytype)1.1000000238418579,(tinytype)1.1000000238418579).finished(),
	(tiny_VectorNx() << (tinytype)1.1000000238418579,(tinytype)1.1000000238418579).finished(),
	(tiny_VectorNu() << (tinytype)2.0999999046325684,(tinytype)2.0999999046325684).finished(),
	(tiny_MatrixNxNx() << (tinytype)1.0000000000000000,(tinytype)5.0000000000000000,(tinytype)1.0000000000000000,(tinytype)2.0000000000000000).finished(),
	(tiny_MatrixNxNu() << (tinytype)3.0000000000000000,(tinytype)3.0000000000000000,(tinytype)4.0000000000000000,(tinytype)1.0000000000000000).finished(),
	(tiny_MatrixNuNhm1() << (tinytype)-0.5000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000).finished(),
	(tiny_MatrixNuNhm1() << (tinytype)0.5000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000).finished(),
	(tiny_MatrixNxNh() << (tinytype)-1.1000000238418579,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000).finished(),
	(tiny_MatrixNxNh() << (tinytype)1.1000000238418579,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000).finished(),
	(tiny_MatrixNxNh() << (tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000).finished(),
	(tiny_MatrixNuNhm1() << (tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000,(tinytype)0.0000000000000000).finished(),
	(tiny_VectorNu() << (tinytype)0.0000000000000000,(tinytype)0.0000000000000000).finished()
};

TinySolver tiny_data_solver = {&settings, &cache, &work};

#ifdef __cplusplus
}
#endif

