/*
 * File:          bHYPRE_ParCSRDiagScale_IOR.h
 * Symbol:        bHYPRE.ParCSRDiagScale-v1.0.0
 * Symbol Type:   class
 * Babel Version: 0.8.0
 * SIDL Created:  20030314 14:22:47 PST
 * Generated:     20030314 14:22:49 PST
 * Description:   Intermediate Object Representation for bHYPRE.ParCSRDiagScale
 * 
 * WARNING: Automatically generated; changes will be lost
 * 
 * babel-version = 0.8.0
 * source-line   = 1128
 * source-url    = file:/home/falgout/linear_solvers/babel/Interfaces.idl
 */

#ifndef included_bHYPRE_ParCSRDiagScale_IOR_h
#define included_bHYPRE_ParCSRDiagScale_IOR_h

#ifndef included_SIDL_header_h
#include "SIDL_header.h"
#endif
#ifndef included_SIDL_BaseClass_IOR_h
#include "SIDL_BaseClass_IOR.h"
#endif
#ifndef included_bHYPRE_Operator_IOR_h
#include "bHYPRE_Operator_IOR.h"
#endif
#ifndef included_bHYPRE_Solver_IOR_h
#include "bHYPRE_Solver_IOR.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif

/*
 * Symbol "bHYPRE.ParCSRDiagScale" (version 1.0.0)
 * 
 * Diagonal scaling preconditioner for ParCSR matrix class.
 * 
 * Objects of this type can be cast to Solver objects using the
 * {\tt \_\_cast} methods.
 * 
 */

struct bHYPRE_ParCSRDiagScale__array;
struct bHYPRE_ParCSRDiagScale__object;

extern struct bHYPRE_ParCSRDiagScale__object*
bHYPRE_ParCSRDiagScale__new(void);

extern struct bHYPRE_ParCSRDiagScale__object*
bHYPRE_ParCSRDiagScale__remote(const char *url);

extern void bHYPRE_ParCSRDiagScale__init(
  struct bHYPRE_ParCSRDiagScale__object* self);
extern void bHYPRE_ParCSRDiagScale__fini(
  struct bHYPRE_ParCSRDiagScale__object* self);
extern void bHYPRE_ParCSRDiagScale__IOR_version(int32_t *major, int32_t *minor);

/*
 * Forward references for external classes and interfaces.
 */

struct SIDL_BaseInterface__array;
struct SIDL_BaseInterface__object;
struct SIDL_ClassInfo__array;
struct SIDL_ClassInfo__object;
struct bHYPRE_Vector__array;
struct bHYPRE_Vector__object;

/*
 * Declare the method entry point vector.
 */

struct bHYPRE_ParCSRDiagScale__epv {
  /* Implicit builtin methods */
  void* (*f__cast)(
    struct bHYPRE_ParCSRDiagScale__object* self,
    const char* name);
  void (*f__delete)(
    struct bHYPRE_ParCSRDiagScale__object* self);
  void (*f__ctor)(
    struct bHYPRE_ParCSRDiagScale__object* self);
  void (*f__dtor)(
    struct bHYPRE_ParCSRDiagScale__object* self);
  /* Methods introduced in SIDL.BaseInterface-v0.8.1 */
  void (*f_addRef)(
    struct bHYPRE_ParCSRDiagScale__object* self);
  void (*f_deleteRef)(
    struct bHYPRE_ParCSRDiagScale__object* self);
  SIDL_bool (*f_isSame)(
    struct bHYPRE_ParCSRDiagScale__object* self,
    struct SIDL_BaseInterface__object* iobj);
  struct SIDL_BaseInterface__object* (*f_queryInt)(
    struct bHYPRE_ParCSRDiagScale__object* self,
    const char* name);
  SIDL_bool (*f_isType)(
    struct bHYPRE_ParCSRDiagScale__object* self,
    const char* name);
  /* Methods introduced in SIDL.BaseClass-v0.8.1 */
  struct SIDL_ClassInfo__object* (*f_getClassInfo)(
    struct bHYPRE_ParCSRDiagScale__object* self);
  /* Methods introduced in SIDL.BaseInterface-v0.8.1 */
  /* Methods introduced in bHYPRE.Operator-v1.0.0 */
  int32_t (*f_SetCommunicator)(
    struct bHYPRE_ParCSRDiagScale__object* self,
    void* mpi_comm);
  int32_t (*f_SetIntParameter)(
    struct bHYPRE_ParCSRDiagScale__object* self,
    const char* name,
    int32_t value);
  int32_t (*f_SetDoubleParameter)(
    struct bHYPRE_ParCSRDiagScale__object* self,
    const char* name,
    double value);
  int32_t (*f_SetStringParameter)(
    struct bHYPRE_ParCSRDiagScale__object* self,
    const char* name,
    const char* value);
  int32_t (*f_SetIntArrayParameter)(
    struct bHYPRE_ParCSRDiagScale__object* self,
    const char* name,
    struct SIDL_int__array* value);
  int32_t (*f_SetDoubleArrayParameter)(
    struct bHYPRE_ParCSRDiagScale__object* self,
    const char* name,
    struct SIDL_double__array* value);
  int32_t (*f_GetIntValue)(
    struct bHYPRE_ParCSRDiagScale__object* self,
    const char* name,
    int32_t* value);
  int32_t (*f_GetDoubleValue)(
    struct bHYPRE_ParCSRDiagScale__object* self,
    const char* name,
    double* value);
  int32_t (*f_Setup)(
    struct bHYPRE_ParCSRDiagScale__object* self,
    struct bHYPRE_Vector__object* b,
    struct bHYPRE_Vector__object* x);
  int32_t (*f_Apply)(
    struct bHYPRE_ParCSRDiagScale__object* self,
    struct bHYPRE_Vector__object* b,
    struct bHYPRE_Vector__object** x);
  /* Methods introduced in bHYPRE.Solver-v1.0.0 */
  int32_t (*f_SetOperator)(
    struct bHYPRE_ParCSRDiagScale__object* self,
    struct bHYPRE_Operator__object* A);
  int32_t (*f_SetTolerance)(
    struct bHYPRE_ParCSRDiagScale__object* self,
    double tolerance);
  int32_t (*f_SetMaxIterations)(
    struct bHYPRE_ParCSRDiagScale__object* self,
    int32_t max_iterations);
  int32_t (*f_SetLogging)(
    struct bHYPRE_ParCSRDiagScale__object* self,
    int32_t level);
  int32_t (*f_SetPrintLevel)(
    struct bHYPRE_ParCSRDiagScale__object* self,
    int32_t level);
  int32_t (*f_GetNumIterations)(
    struct bHYPRE_ParCSRDiagScale__object* self,
    int32_t* num_iterations);
  int32_t (*f_GetRelResidualNorm)(
    struct bHYPRE_ParCSRDiagScale__object* self,
    double* norm);
  /* Methods introduced in bHYPRE.ParCSRDiagScale-v1.0.0 */
};

/*
 * Define the class object structure.
 */

struct bHYPRE_ParCSRDiagScale__object {
  struct SIDL_BaseClass__object       d_sidl_baseclass;
  struct bHYPRE_Operator__object      d_bhypre_operator;
  struct bHYPRE_Solver__object        d_bhypre_solver;
  struct bHYPRE_ParCSRDiagScale__epv* d_epv;
  void*                               d_data;
};

struct bHYPRE_ParCSRDiagScale__external {
  struct bHYPRE_ParCSRDiagScale__object*
  (*createObject)(void);

  struct bHYPRE_ParCSRDiagScale__object*
  (*createRemote)(const char *url);

};

/*
 * This function returns a pointer to a static structure of
 * pointers to function entry points.  Its purpose is to provide
 * one-stop shopping for loading DLLs.
 * loading DLLs
 */

const struct bHYPRE_ParCSRDiagScale__external*
bHYPRE_ParCSRDiagScale__externals(void);

#ifdef __cplusplus
}
#endif
#endif
