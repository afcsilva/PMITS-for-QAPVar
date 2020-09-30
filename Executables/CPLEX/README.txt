In: github.com/afcsilva/PMITS-for-QAPVar

Description:
	"solver" has three exact models implemented to solve the QAP and four variants using CPLEX

==================================================================================
Run:
	./solver [problem_type] [instance_name] [model_type] [time_limit]

Parameters:
	[problem_type] : choose number as below
	0 - QAP
	1 - BiQAP
	2 - GQAP
	3 - QBAP
	4 - QSAP

	[instance_name] : type instance name
	Instance MUST be located in:
	../../Instances/[problem_type]/[instance_name]
	Extension after [instance_name] not required!

	[model_type] : choose number as below
	0 - for non-linear (quadratic integer programming) model
	1 - for standard linearization model
	2 - for level-1 RLT model

	[time_limit] : type CPLEX time limit in seconds

==================================================================================
Computation environment tested:

	Ubuntu 18.04
	Compiled with g++
	CPLEX Studio v12.10
