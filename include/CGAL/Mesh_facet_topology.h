// Copyright (c) 2010 INRIA Sophia-Antipolis (France).
// All rights reserved.
//
// This file is part of CGAL (www.cgal.org).
// You can redistribute it and/or modify it under the terms of the GNU
// General Public License as published by the Free Software Foundation,
// either version 3 of the License, or (at your option) any later version.
//
// Licensees holding a valid commercial license may use this file in
// accordance with the commercial license agreement provided with the software.
//
// This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
// WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
//
// $URL: svn+ssh://scm.gforge.inria.fr/svn/cgal/branches/releases/CGAL-4.1-branch/Mesh_3/include/CGAL/Mesh_facet_topology.h $
// $Id: Mesh_facet_topology.h 67117 2012-01-13 18:14:48Z lrineau $
//
//
// Author(s)     : Stephane Tayeb
//
//******************************************************************************
// File Description : 
//******************************************************************************

#ifndef CGAL_MESH_FACET_TOPOLOGY_H
#define CGAL_MESH_FACET_TOPOLOGY_H

namespace CGAL {

enum Mesh_facet_topology {
  FACET_VERTICES_ON_SURFACE = 1,
  FACET_VERTICES_ON_SAME_SURFACE_PATCH,
  FACET_VERTICES_ON_SAME_SURFACE_PATCH_WITH_ADJACENCY_CHECK
};  
  
} // end namespace CGAL

#endif // CGAL_MESH_FACET_TOPOLOGY_H