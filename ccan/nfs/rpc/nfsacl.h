/* Licensed under GPLv3+ - see LICENSE file for details */
/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _NFSACL_H_RPCGEN
#define _NFSACL_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


#define NFSACL_PROGRAM 100227
#define NFSACL_V3 3

#if defined(__STDC__) || defined(__cplusplus)
#define NFSACL3_NULL 0
extern  void * nfsacl3_null_3(void *, CLIENT *);
extern  void * nfsacl3_null_3_svc(void *, struct svc_req *);
extern int nfsacl_program_3_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define NFSACL3_NULL 0
extern  void * nfsacl3_null_3();
extern  void * nfsacl3_null_3_svc();
extern int nfsacl_program_3_freeresult ();
#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_NFSACL_H_RPCGEN */
