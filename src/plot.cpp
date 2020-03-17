#include "plot.hpp"


Plot::Plot(sf::RenderWindow& window,
      const size_t x_lines_count,
      const size_t y_lines_count,
      sf::Vector2<double> window_dim[2])
    : pos_({0, 0})
    , scale_({1, 1})
    , window_dim_(window_dim)
    , x_labels_(x_lines_count)
    , y_labels_(y_lines_count)
    , window_(window) {
  for (size_t i = 0; i < x_lines_count; ++i) {
    x_lines_.append({});
    y_lines_.append({});
    y_labels_.emplace_back({});
    y_labels_.emplace_back({});
  }
}


void Plot::Draw() {
  
}
