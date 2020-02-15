#include <boost/geometry.hpp>
#include <boost/geometry/geometries/geometries.hpp>
#include <boost/geometry/srs/epsg.hpp>
#include <boost/geometry/srs/transformation.hpp>
#include <iostream>
#include <boost/geometry/strategies/transform/srs_transformer.hpp>

namespace bg = boost::geometry;

typedef bg::model::d2::point_xy<double, bg::cs::geographic<bg::degree>>
    point_type;

int main() {
  point_type original(-119.37, 37.37);
  point_type transformed;

  int from = 4326;
  int to = 32617;

  bg::srs::transformation<> tr { bg::srs::epsg(from), bg::srs::epsg(to) };
  tr.forward(original, transformed);

  std::cout << std::setprecision(15)  << "transformed: " << bg::dsv(transformed) << std::endl;

  return 0;
}
