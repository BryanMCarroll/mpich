/*
 * Copyright (C) by Argonne National Laboratory
 *     See COPYRIGHT in top-level directory
 */

#include "mpiimpl.h"

/* generate gentran algo prototypes */
#include "tsp_gentran.h"
#include "iallgather_tsp_recexch_algos_prototypes.h"
#include "tsp_undef.h"

int MPIR_Iallgather_intra_gentran_recexch_doubling(const void *sendbuf, MPI_Aint sendcount,
                                                   MPI_Datatype sendtype, void *recvbuf,
                                                   MPI_Aint recvcount, MPI_Datatype recvtype,
                                                   MPIR_Comm * comm, int k, MPIR_Request ** req)
{
    int mpi_errno = MPI_SUCCESS;

    mpi_errno = MPII_Gentran_Iallgather_intra_recexch(sendbuf, sendcount, sendtype,
                                                      recvbuf, recvcount, recvtype,
                                                      comm, req,
                                                      MPIR_IALLGATHER_RECEXCH_TYPE_DISTANCE_DOUBLING,
                                                      k);

    return mpi_errno;
}
