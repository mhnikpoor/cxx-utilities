/*
 *~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 * Copyright (c) 2019, Lawrence Livermore National Security, LLC.
 *
 * Produced at the Lawrence Livermore National Laboratory
 *
 * LLNL-CODE-746361
 *
 * All rights reserved. See COPYRIGHT for details.
 *
 * This file is part of the GEOSX Simulation Framework.
 *
 * GEOSX is a free software; you can redistribute it and/or modify it under
 * the terms of the GNU Lesser General Public License (as published by the
 * Free Software Foundation) version 2.1 dated February 1999.
 *~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 */

#pragma once

// Source includes
#include "benchmarkHelpers.hpp"

namespace LvArray
{
namespace benchmarking
{

constexpr unsigned long THREADS_PER_BLOCK = 256;

template< typename PERMUTATION >
struct MatrixVectorNative
{
  static void fortran( ArrayView< VALUE_TYPE const, PERMUTATION > const & a,
                       ArrayView< VALUE_TYPE const, RAJA::PERM_I > const & b,
                       ArrayView< VALUE_TYPE, RAJA::PERM_I > const & c,
                       INDEX_TYPE const N,
                       INDEX_TYPE const M );

  static void subscript( ArrayView< VALUE_TYPE const, PERMUTATION > const & a,
                         ArrayView< VALUE_TYPE const, RAJA::PERM_I > const & b,
                         ArrayView< VALUE_TYPE, RAJA::PERM_I > const & c,
                         INDEX_TYPE const N,
                         INDEX_TYPE const M );

  static void rajaView( RajaView< VALUE_TYPE const, PERMUTATION > const & a,
                        RajaView< VALUE_TYPE const, RAJA::PERM_I > const & b,
                        RajaView< VALUE_TYPE, RAJA::PERM_I > const & c,
                        INDEX_TYPE const N,
                        INDEX_TYPE const M );

  static void pointer( VALUE_TYPE const * const restrict a,
                       VALUE_TYPE const * const restrict b,
                       VALUE_TYPE * const restrict c,
                       INDEX_TYPE const N,
                       INDEX_TYPE const M );
};

template< typename PERMUTATION, typename POLICY >
struct MatrixVectorRAJA
{
  static void fortran( ArrayView< VALUE_TYPE const, PERMUTATION > const & a,
                       ArrayView< VALUE_TYPE const, RAJA::PERM_I > const & b,
                       ArrayView< VALUE_TYPE, RAJA::PERM_I > const & c,
                       INDEX_TYPE const N,
                       INDEX_TYPE const M );

  static void subscript( ArrayView< VALUE_TYPE const, PERMUTATION > const & a,
                         ArrayView< VALUE_TYPE const, RAJA::PERM_I > const & b,
                         ArrayView< VALUE_TYPE, RAJA::PERM_I > const & c,
                         INDEX_TYPE const N,
                         INDEX_TYPE const M );

  static void rajaView( RajaView< VALUE_TYPE const, PERMUTATION > const & a,
                        RajaView< VALUE_TYPE const, RAJA::PERM_I > const & b,
                        RajaView< VALUE_TYPE, RAJA::PERM_I > const & c,
                        INDEX_TYPE const N,
                        INDEX_TYPE const M );

  static void pointer( VALUE_TYPE const * const restrict a,
                       VALUE_TYPE const * const restrict b,
                       VALUE_TYPE * const restrict c,
                       INDEX_TYPE const N,
                       INDEX_TYPE const M );
};

} // namespace benchmarking
} // namespace LvArray
