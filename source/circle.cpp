# include "circle.hpp"

Circle::Circle() {
  r_ = 1;
}

Circle::Circle(Vec2 const& mid, float r, Color const& c) : mid_(mid), r_(r), c_(c) {
  higlight_color_ = Color{1-c.r,1-c.g,1-c.b};
}

float const Circle::circumference() {
  return 2 * M_PI * r_; 
}

void Circle::draw(Window& w, bool highlight, int divisor) const {
  Color c;
  double phi = 2*M_PI/double(divisor);
  if (highlight) {
    c = higlight_color_;
  } else {
    c = c_;
  }
  Vec2 ring_point{r_,0};
  Mat2 phi_rotation = make_rotation_mat2(phi);
  for (int i = 0; i < divisor; ++i) {
    Vec2 first_point = mid_ + ring_point;
    ring_point = ring_point * phi_rotation;
    Vec2 last_point = mid_ + ring_point;
    w.draw_line(first_point.x,first_point.y,last_point.x,last_point.y,c.r,c.g,c.b);
  }
}

bool Circle::is_inside(Vec2 const& point){
  Vec2 mid_to_point = mid_ - point;
  if(mid_to_point.x*mid_to_point.x + mid_to_point.y*mid_to_point.y <= r_*r_) {
    return true;
  } else {
    return false;
  }
}