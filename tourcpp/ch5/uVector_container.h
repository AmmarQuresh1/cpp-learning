#pragma once
#include "Container.h"

class uVector_container : public Container {
private:
    double* elem;
    int sz;
public:
    uVector_container(int s);
    ~uVector_container();

    double& operator[](int i) override;
    int size() const override;
};
