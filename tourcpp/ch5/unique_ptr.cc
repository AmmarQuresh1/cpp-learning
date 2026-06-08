#include <iostream>
#include <memory>
#include <vector>

class Point {
public:
    Point(int x, int y): x{x}, y{y} {}
    int getX() const {return x;}
    int getY() const {return y;}
private:
    int x;
    int y;
};

class Circle {
public:
    Circle(Point p, int rad): x{p}, r{rad} {}
    virtual ~Circle() {};
    virtual void draw() const {
        std::cout<<x.getX()<<x.getY();
    }
private:
    Point x;
    int r;
};

class Smiley : public Circle {
public:
    Smiley(Point p, int rad): Circle{p, rad} {}
    void add_eye(std::unique_ptr<Circle> eye) {
        eyes.push_back(std::move(eye));
    }
    void draw() const override {
        Circle::draw();
        std::cout<<eyes.size();
    }
private:
    std::vector<std::unique_ptr<Circle>> eyes;
};

int main() {
    std::vector<std::unique_ptr<Circle>> v;

    // same as:
    // v.push_back(std::unique_ptr<Circle>{new Circle(Point(0, 0), 5)});
    v.push_back(std::make_unique<Circle>(Point{0,0}, 5)); 

    auto s = std::make_unique<Smiley>(Point(1,1), 10);
    s->add_eye(std::make_unique<Circle>(Point(0,0), 2)); 
    v.push_back(std::move(s));

    for (auto const& x:v){
        x->draw();
    }
}
