#pragma once
#include "Container.h"
#include <vector>

class Vector_container : public Container {
public:
    Vector_container(int s);
    ~Vector_container();

    double& operator[](int i) override;
    int size() const override;
private:
    std::vector<double> v;
};
