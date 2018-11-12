/*
 *~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 * Copyright (c) 2018, Lawrence Livermore National Security, LLC.
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

/*
 * FloatingPointEnvironment.h
 *
 *  Created on: Jun 14, 2016
 *      Author: settgast1
 */

#ifndef COMPONENTS_CORE_SRC_CODINGUTILITIES_SETSIGNALHANDLING_HPP_
#define COMPONENTS_CORE_SRC_CODINGUTILITIES_SETSIGNALHANDLING_HPP_

#include <exception>

namespace cxx_utilities
{

void setSignalHandling( void (*handler)( int ) );


} /* namespace geosx */

#endif /* COMPONENTS_CORE_SRC_CODINGUTILITIES_SETSIGNALHANDLING_HPP_ */
