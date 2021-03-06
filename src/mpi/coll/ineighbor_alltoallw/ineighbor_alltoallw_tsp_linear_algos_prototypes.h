/*
 * Copyright (C) by Argonne National Laboratory
 *     See COPYRIGHT in top-level directory
 */

/* Header protection (i.e., INEIGHBOR_ALLTOALL_TSP_LINEAR_ALGOS_PROTOTYPES_H_INCLUDED) is
 * intentionally omitted since this header might get included multiple
 * times within the same .c file. */

#include "tsp_namespace_def.h"

#undef MPIR_TSP_Ineighbor_alltoallw_allcomm_linear
#define MPIR_TSP_Ineighbor_alltoallw_allcomm_linear        MPIR_TSP_NAMESPACE(Ineighbor_alltoallw_allcomm_linear)
#undef MPIR_TSP_Ineighor_alltoallw_sched_allcomm_linear
#define MPIR_TSP_Ineighbor_alltoallw_sched_allcomm_linear  MPIR_TSP_NAMESPACE(Ineighbor_alltoallw_sched_allcomm_linear)

int MPIR_TSP_Ineighbor_alltoallw_sched_allcomm_linear(const void *sendbuf,
                                                      const MPI_Aint sendcounts[],
                                                      const MPI_Aint sdispls[],
                                                      const MPI_Datatype sendtypes[], void *recvbuf,
                                                      const MPI_Aint recvcounts[],
                                                      const MPI_Aint rdispls[],
                                                      const MPI_Datatype recvtypes[],
                                                      MPIR_Comm * comm_ptr,
                                                      MPIR_TSP_sched_t * sched);
int MPIR_TSP_Ineighbor_alltoallw_allcomm_linear(const void *sendbuf, const MPI_Aint sendcounts[],
                                                const MPI_Aint sdispls[],
                                                const MPI_Datatype sendtypes[], void *recvbuf,
                                                const MPI_Aint recvcounts[],
                                                const MPI_Aint rdispls[],
                                                const MPI_Datatype recvtypes[],
                                                MPIR_Comm * comm_ptr, MPIR_Request ** req);
