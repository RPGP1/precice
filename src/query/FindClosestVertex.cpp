#include "FindClosestVertex.hpp"
#include "mesh/Vertex.hpp"
#include "mesh/Mesh.hpp"

namespace precice {
namespace query {

FindClosestVertex:: FindClosestVertex
(
  const Eigen::VectorXd& searchPoint )
:
  _searchPoint (searchPoint)
{}

const Eigen::VectorXd& FindClosestVertex:: getSearchPoint() const
{
  return _searchPoint;
}

bool FindClosestVertex:: hasFound() const
{
  return _closestVertex != nullptr;
}

double FindClosestVertex:: getEuclidianDistance()
{
   return _shortestDistance;
}

mesh::Vertex& FindClosestVertex:: getClosestVertex()
{
  PRECICE_ASSERT( _closestVertex != nullptr );
  return *_closestVertex;
}

}} // namespace precice, query
