In: github.com/afcsilva/PMITS-for-QAPVar

Description:
	"PMITS" uses a parallel memetic iterated tabu search to solve the QAP and its variants

==================================================================================
Run:
	./PMITS [instance_name] [population_size] [mutation_rate] [tabu_search_iterations] [time_limit] [perc_conv] [active_perc_conv] [seed]

Parameters:
	[instance_name] : type instance name (STRING)
	Instance MUST be located in:
	../../../Instances/[problem_type]/[instance_name]
	Extension after [instance_name] not required!

	[population_size] : type parameter "P" value (INTEGER)
	Number of parallel solutions to evolve

	[mutation_rate] : type parameter "M" value (INTEGER)
	Percentage of solutions that mutation is applied
	MUST be between 0 and 100

	[tabu_search_iterations] : type parameter "I" value (INTEGER)
	Maximum number of tabu search iterations

	[time_limit] : type time limit in seconds (DOUBLE)

	[perc_conv] : type percentage of solutions to be equal to stop condition (DOUBLE)
	MUST be between 0 and 1

	[active_perc_conv] : type 0 or 1 to activate the convergence stopping condition (BOOL)

	[seed] : type random seed number (INTEGER)

==================================================================================
Computation environment tested:

	Ubuntu 18.04
	Compiled with g++
